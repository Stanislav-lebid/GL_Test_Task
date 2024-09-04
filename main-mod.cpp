#include <iostream>

void sort_array(int arr[], int size) {
  for (int i = 0; i < size - 1; ++i) {
    for (int j = i + 1; j < size; ++j) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int find_min_diff(int arr[], int size) {
  int min_diff = arr[1] - arr[0];
  for (int i = 1; i < size; ++i) {
    int diff = arr[i] - arr[i - 1];
    if (diff < min_diff) {
      min_diff = diff;
    }
  }
  return min_diff;
}

bool is_unique(int arr[], int size, int num) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == num) {
      return false;
    }
  }
  return true;
}

void clear_input_stream() {
  std::cin.clear(); // Скидаємо стан потоку
  while (std::cin.get() != '\n'); // Очищаємо вхідний буфер, поки не знайдемо новий рядок
}

void find_missing_numbers(int arr[], int size, int N, int missing_numbers[]) {
  sort_array(arr, size);
  int min_diff = find_min_diff(arr, size);

  int found = 0;

  for (int i = 0; i < size - 1 && found < 2; ++i) {
    int current_diff = arr[i + 1] - arr[i];
    while (current_diff > min_diff && found < 2) {
      arr[i] += min_diff;
      missing_numbers[found] = arr[i];
      found++;
      current_diff -= min_diff;
    }
  }

  // Якщо пропущені числа знаходяться після останнього елемента
  if (found < 2) {
    while (found < 2) {
      arr[size - 1] += min_diff;
      missing_numbers[found] = arr[size - 1];
      found++;
    }
  }
}

int main() {
  int N;
  int* arr;
  int missing_numbers[2];
  char choice;

  std::cout << "Do you want to enter the dimension and elements of the array yourself? (y/n): ";
  std::cin >> choice;

  if (choice == 'y' || choice == 'Y') {
    std::cout << "Enter the dimension of the array: ";
    std::cin >> N;

    arr = new int[N - 2];  // Виділяємо пам'ять під масив

    for (int i = 0; i < N - 2; ++i) {
      bool valid_input = false;
      while (!valid_input) {
        std::cout << "Enter a number " << i + 1 << ": ";
        std::cin >> arr[i];

        if (std::cin.fail() || arr[i] <= 0 || !is_unique(arr, i, arr[i])) {
          clear_input_stream();
          std::cout << "Invalid value. The number must be an integer, greater than zero, and unique. Try again.\n";
        }
        else {
          valid_input = true;
        }
      }
    }
  }
  else {
    N = 5;
    arr = new int[N - 2] {1, 3, 4};  // Використовуємо дефолтний масив
  }

  find_missing_numbers(arr, N - 2, N, missing_numbers);
  std::cout << "Missing numbers: " << missing_numbers[0] << " and " << missing_numbers[1] << std::endl;

  delete[] arr;  // Звільняємо пам'ять

  return 0;
}

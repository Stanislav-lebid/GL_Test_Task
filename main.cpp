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

void find_missing_numbers(int arr[], int size, int N, int missing_numbers[2]) {
  // Відсортуємо масив
  sort_array(arr, size);

  int found = 0;
  int expected = 1; // Очікуване число в послідовності

  for (int i = 0; i < size && found < 2; ++i) {
    // Порівнюємо очікуване число з поточним числом у масиві
    if (arr[i] != expected) {
      missing_numbers[found] = expected;
      found++;
      i--;  // Залишаємо індекс на місці для перевірки поточного елемента з наступним очікуваним числом
    }
    expected++;
  }

  // Якщо відсутні числа ще не знайдені, це означає, що вони в кінці
  while (found < 2) {
    missing_numbers[found] = expected;
    found++;
    expected++;
  }
}

bool is_unique(int arr[], int size, int num) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == num) {
      return false;
    }
  }
  return true;
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

        if (std::cin.fail() || arr[i] <= 0 || arr[i] > N || !is_unique(arr, i, arr[i])) {
          std::cin.clear(); // Скидаємо стан потоку
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаємо буфер
          std::cout << "Invalid value. The number must be an integer, greater than zero, not greater than " << N << " and unique. Try again.\n";
        }
        else {
          valid_input = true;
        }
      }
    }
  }
  else {
    N = 5;
    arr = new int[N - 2] {2, 4, 3};  // Використовуємо дефолтний масив
  }

  find_missing_numbers(arr, N - 2, N, missing_numbers);

  std::cout << "Input array: ";
  for (int i = 0; i < N - 2; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Missing numbers: " << missing_numbers[0] << " and " << missing_numbers[1] << std::endl;

  std::cout << "The whole array: ";
  int complete_index = 0;
  for (int i = 1; i <= N; ++i) {
    if (complete_index < 2 && i == missing_numbers[complete_index]) {
      std::cout << missing_numbers[complete_index] << " ";
      complete_index++;
    }
    else {
      std::cout << arr[i - complete_index - 1] << " ";
    }
  }
  std::cout << std::endl;

  delete[] arr;  // Звільняємо пам'ять

  return 0;
}

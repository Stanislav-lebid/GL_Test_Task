# GL_Test_Task(ukr)

Вітаю!
Це мій розв'язок тестового завдання на позицію "Trainee Software Engineer (C/C++ – Embedded)" в компанію GlobalLogic.
В цьому репозиторії знаходяться 2 файли.

## Файл main.cpp:
Ми маємо масив розміром N-2, який містить цифри > 1 і < N - 1. Не вистачає двох послідовних чисел. Нам потрібно знайти ці два числа
Ця програма знаходить два відсутні числа у масиві чисел. Програма дозволяє користувачеві вибирати між введенням чисел вручну або використанням дефолтного набору даних.

### Функціональність
Сортування масиву: Функція sort_array сортує масив чисел за зростанням.
Пошук відсутніх чисел: Функція find_missing_numbers знаходить два відсутні числа у відсортованому масиві.
Перевірка унікальності: Функція is_unique перевіряє, чи є число унікальним у межах поточного масиву.
Введення даних користувачем: Програма запитує користувача, чи він хоче ввести розмір масиву та його елементи вручну, чи використовувати дефолтний масив.

### Як використовувати
Після запуску програми вам буде запропоновано вибрати, чи хочете ви самостійно вводити масив. Введіть y або Y, щоб ввести масив самостійно.
Введіть будь-який інший символ, щоб використовувати дефолтний масив. Якщо ви обрали введення масиву:
Програма запитає розмір масиву N. Вам потрібно ввести унікальних N-2 елементів масиву, кожне з яких має бути цілим, більше нуля і не більше ніж N.
Програма знайде та виведе два відсутні числа у послідовності. Виведеться цілий масив, включаючи знайдені відсутні числа.

## Файл main-mod.cpp:
Цей файл містить код який вирішує задачу, але без обмежень діапазону чисел в масиві, але числа йдуть з фіксованим кроком.

### Функціональність
Сортування масиву: Функція sort_array сортує масив чисел за зростанням.
Пошук відсутніх чисел: Функція find_missing_numbers знаходить два відсутні числа у відсортованому масиві.
Перевірка унікальності: Функція is_unique перевіряє, чи є число унікальним у межах поточного масиву.
Введення даних користувачем: Програма запитує користувача, чи він хоче ввести розмір масиву та його елементи вручну, чи використовувати дефолтний масив.

### Як використовувати
Після запуску програми вам буде запропоновано вибрати, чи хочете ви самостійно вводити масив. Введіть y або Y, щоб ввести масив самостійно.
Введіть будь-який інший символ, щоб використовувати дефолтний масив. Якщо ви обрали введення масиву:
Програма запитає розмір масиву N. Вам потрібно ввести унікальних N-2 елементів масиву, кожне з яких має бути цілим, більше нуля.
Програма знайде та виведе два відсутні числа у послідовності. Виведеться цілий масив, включаючи знайдені відсутні числа.


# GL_Test_Task(ENG)

Congratulations!
This is my solution to the test task for the position of "Trainee Software Engineer (C/C++ – Embedded)" in the GlobalLogic company.
There are 2 files in this repository.

## File main.cpp:
We have an array of size N-2 that contains numbers > 1 and < N - 1. Two consecutive numbers are missing. We need to find these two numbers
This program finds two missing numbers in an array of numbers. The program allows the user to choose between entering numbers manually or using a default data set.

### Functionality
Sorting an array: The sort_array function sorts an array of numbers in ascending order.
Finding Missing Numbers: The find_missing_numbers function finds two missing numbers in a sorted array.
Uniqueness check: The is_unique function checks whether a number is unique within the current array.
User Input: The program asks the user if they want to enter the size of the array and its elements manually, or if they want to use the default array.

### How to use
After starting the program, you will be prompted to choose whether you want to enter the array yourself. Enter y or Y to enter the array yourself.
Enter any other character to use the default array. If you chose array input:
The program will ask for an array size of N. You need to enter N-2 unique array elements, each of which must be an integer, greater than zero, and not greater than N.
The program will find and output the two missing numbers in the sequence. The entire array will be output, including the missing numbers found.

## File main-mod.cpp:
This file contains code that solves the problem, but without restrictions on the range of numbers in the array, but the numbers go with a fixed step.

### Functionality
Sorting an array: The sort_array function sorts an array of numbers in ascending order.
Finding Missing Numbers: The find_missing_numbers function finds two missing numbers in a sorted array.
Uniqueness check: The is_unique function checks whether a number is unique within the current array.
User Input: The program asks the user if they want to enter the size of the array and its elements manually, or if they want to use the default array.

### How to use
After starting the program, you will be prompted to choose whether you want to enter the array yourself. Enter y or Y to enter the array yourself.
Enter any other character to use the default array. If you chose array input:
The program will ask for an array size of N. You need to enter N-2 unique array elements, each of which must be an integer greater than zero.
The program will find and output the two missing numbers in the sequence. The entire array will be output, including the missing numbers found.

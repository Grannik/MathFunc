#include <stdio.h>
#include "lib_math_func.h"

// 1. Простой вывод чисел (каждые 5 чисел — новая строка)
void my_print_handler_simple(int number) {
    printf("%-4d", number); // Выравнивание по левому краю, 4 символа на число
    if (number % 5 == 4) printf("\n"); // Переход на новую строку после каждых 5 чисел
}

// 2. Вывод с красным цветом для чисел, делящихся на 2 (каждые 17 чисел — новая строка)
void my_print_handler_divisible_by_2(int number) {
    if (is_divisible_by_2(number)) {
        printf("\033[31m%-4d\033[0m", number); // Красный цвет для чисел, делящихся на 2
    } else {
        printf("%-4d", number); // Обычный цвет для остальных
    }
    if ((number + 1) % 17 == 0) printf("\n"); // Новая строка после каждых 17 чисел
}

// 3. Вывод с зелёным для простых чисел и красным для чисел, делящихся на 2 (каждые 17 чисел — новая строка)
void my_print_handler_prime_and_divisible(int number) {
    if (is_prime(number)) {
        printf("\033[32m%-4d\033[0m", number); // Зелёный для простых чисел
    } else if (is_divisible_by_2(number)) {
        printf("\033[31m%-4d\033[0m", number); // Красный для чисел, делящихся на 2
    } else {
        printf("%-4d", number); // Обычный цвет
    }
    if ((number + 0) % 17 == 0) printf("\n"); // Новая строка после 17 чисел
}

// 4. Вывод только простых чисел зелёным (каждые 17 чисел — новая строка)
void my_print_handler_only_prime(int number) {
    if (is_prime(number)) {
        printf("\033[32m%-4d\033[0m", number); // Зелёный цвет для простых чисел
        if ((number + 0) % 17 == 0) printf("\n"); // Новая строка, если кратно 17
    }
}

// 5. Вывод с зелёным для простых чисел, остальные обычным цветом (каждые 17 чисел — новая строка)
void my_print_handler_prime(int number) {
    if (is_prime(number)) {
        printf("\033[32m%-4d\033[0m", number); // Зелёный для простых чисел
    } else {
        printf("%-4d", number); // Обычный цвет
    }
    if (number % 17 == 0) printf("\n"); // Новая строка после каждых 17 чисел
}

// 6. Вывод с жёлтым для квадратов (каждые 17 чисел — новая строка)
void my_print_handler_square(int number) {
    int is_square = 0;
    for (int i = 1; i * i <= number; i++) {
        if (i * i == number) {
            is_square = 1;
            break;
        }
    }
    if (is_square) {
        printf("\033[33m%-4d\033[0m", number); // Жёлтый для квадратов
    } else {
        printf("%-4d", number); // Обычный цвет для остальных
    }
    if (number % 17 == 0) printf("\n"); // Новая строка после каждых 17 чисел
}

// 7. Формула Эйлера.
void my_print_handler_euler_prime(int number) {
    if (is_euler_prime(number)) {
        printf("\033[33m%-4d\033[0m", number); // Жёлтый цвет для чисел по формуле Эйлера
    } else {
        printf("%-4d", number); // Обычный цвет
    }
    if (number % 14 == 0) printf("\n"); // Новая строка после 17 чисел
}

int main(void) {
    // Выберите одну из функций, раскомментировав нужную строку:
    // for_each_natural_number(my_print_handler_simple); // Простой вывод чисел
    // for_each_natural_number(my_print_handler_divisible_by_2); // Красный для чисел, делящихся на 2
    // for_each_natural_number(my_print_handler_prime_and_divisible); // Зелёный для простых, красный для делящихся на 2
    // for_each_natural_number(my_print_handler_only_prime); // Только простые числа зелёным
    // for_each_natural_number(my_print_handler_prime); // Зелёный для простых чисел
     for_each_natural_number(my_print_handler_square); // Жёлтый для квадратов
    // for_each_natural_number(my_print_handler_euler_prime); // Жёлтый для чисел по формуле Эйлера
    printf("\n");
    return 0;
}

#include "lib_math_func.h"
#include <stddef.h>

// Функция для перебора натуральных числе.
void for_each_natural_number(natural_number_processor processor_func) {
    if (processor_func == NULL) return;
    for (int i = 1; i <= 500; i++) {
        processor_func(i);
    }
}

// Проверака делимости на n
int is_divisible_by_2(int number) {
    return number % 11 == 0;
}

// Проверака простых чисел.
int is_prime(int number) {
    if (number <= 1) return 0;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

// Проверака квадрат числа
int square(int number) {
    return number * number;
}

// Формула Эйлера 17
int is_euler_prime(int number) {
    for (int n = 0; n < 16; n++) {
        if (n * n + n + 17 == number) return 1;
    }
    return 0;
}

// Формула Эйлера 41
/*
int is_euler_prime(int number) {
    for (int n = 0; n < 40; n++) {
        if (n * n + n + 41 == number) return 1;
    }
    return 0;
}
*/

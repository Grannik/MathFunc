#ifndef LIB_MATH_FUNC_H
#define LIB_MATH_FUNC_H

typedef void (*natural_number_processor)(int number);

void for_each_natural_number(natural_number_processor processor_func);

int is_divisible_by_2(int number);
int is_prime(int number);
int square(int number);
int is_euler_prime(int number); // Формула Эйлера

#endif // LIB_MATH_FUNC_H


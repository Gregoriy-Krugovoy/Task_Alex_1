// Задача #1 Имеется массив из 512 елементов.
// Каждый елемент массива - целое число в диаппазоне 
// от 0 до 255. Необходимо найти минимальное и максимальное значение 
// массива, а также их позиции в массиве.

#include <stdio.h>
#include <stdint.h>

#define ARRAY_SIZE 512

int main() {
    uint8_t array[ARRAY_SIZE];
    uint8_t arr[ ] = { 0 };
    uint8_t min_value = array[0];
    uint8_t max_value = array[0];
    int min_index = 0;
    int max_index = 0;
    int i;

    // Находим минимальное и максимальное значение, а также их позиции в массиве
    for ( i = 1; i < ARRAY_SIZE; ++i) {

        ++arr[ array[ i ] ];
        if ( array[ i ] < min_value ) {
            min_value = array[i];
            min_index = i;
             //++arr[ i[ array ] ];
        }
        if ( array[ i ] > max_value ) {
            max_value = array[i];
            max_index = i;
        }
    }

    // Выводим результаты
    printf("Минимальное значение: %d, расположение в массиве: %d\n", min_value, min_index);
    printf("Максимальное значение: %d, расположение в массиве: %d\n", max_value, max_index);

    return 0;
}
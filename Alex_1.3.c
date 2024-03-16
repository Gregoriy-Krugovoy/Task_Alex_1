#include <stdio.h>
#include <stdint.h>
#define SIZE 512 // ДП
int main() {
    uint8_t originalArray[ SIZE ]; // Исходный массив из 512 элементов
    uint8_t minPositions[ SIZE ] = { 0 }; // Массив для хранения позиций минимальных значений
    uint8_t maxPositions[ SIZE ] = { 0 }; // Массив для хранения позиций максимальных значений
    unsigned int minCount = 0; // Количество минимальных значений
    unsigned int maxCount = 0; // Количество максимальных значений 
    unsigned int min = 0; // минимальное значение исходного массива
    unsigned int max = 0; // максимальное значение исходного массива
    size_t i; // счетчик
    //size_t a; // счетчик


    unsigned int size = sizeof( originalArray ) / sizeof( originalArray[ 0 ] ); // Вычисляем размер массива

    // находим минимальное и максимальное значение елементов исходящего массива
    for ( i = 0; i < size; i++ ) {
        if ( originalArray[ i ] < min ) {
            min = originalArray[ i ];
        }
        else if ( originalArray[ i ] > max) {
            max = originalArray[ i ];
        }
    }
    // поиск позиций минимальных и максимальных значений исходного массива и складываем их в массивы
    for ( i = 0; i < size; i++ ) {
        if ( originalArray[ i ] == min ) {
            minPositions[ minCount ] = i;
            minCount++;
        } 
        else if ( originalArray[ i ] == max ) {
            maxPositions[ maxCount ] = i;
            maxCount++;
        }
    }

    // Вывод минимального и максимального значений массива
    printf( "\nМинимум: %u \nМаксимум: %u \n", min, max ); 

    printf( "\nКоличество минимальных значений: %u \nКоличество максимальных значений: %u \n", minCount, maxCount ); 

    // Вывод найденных позиций значений 0
    printf("\nПозиции минимальных значений:\n");
    for (int i = 0; i < minCount; i++) {
        printf("%4d ", minPositions[i]);
        if( i % 28 == 27 ) {
            puts("");
        }
    }
    printf("\n");

    // Вывод найденных позиций значений 255
    printf("\nПозиции максимальных значений:\n");
    for (int i = 0; i < maxCount; i++) {
        printf("%4d ", maxPositions[i]);
        if( i % 28 == 27 ) {
            puts("");
        }
    }
    //printf("\n");

    return 0;
}
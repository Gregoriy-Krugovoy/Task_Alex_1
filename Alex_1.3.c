#include <stdio.h>
#include <stdint.h>
#define SIZE 512 // ДП
int main( void ) 
{   uint8_t originalArray[ SIZE ]; // Исходный массив
    unsigned int minPositions[ SIZE ] = { 0 }; // Массив для хранения позиций минимальных значений
    unsigned int maxPositions[ SIZE ] = { 0 }; // Массив для хранения позиций максимальных значений
    unsigned int min_value; // минимальное значение исходного массива
    unsigned int max_value; // максимальное значение исходного массива
    unsigned int num_min_value = 0; // Количество минимальных значений
    unsigned int num_max_value = 0; // Количество максимальных значений 
    
    size_t i; // счетчик

    unsigned int size = sizeof( originalArray ) / sizeof( originalArray[ 0 ] ); // Вычисляем размер массива

    // поиск минимальное и максимальное значение елементов исходящего массива
    min_value = originalArray[ 0 ]; // задать начальное значение
    max_value = originalArray[ 0 ];
    for ( i = 0; i < size; i++ ) {
        if ( originalArray[ i ] < min_value ) {
            min_value = originalArray[ i ];
        }
        else if ( originalArray[ i ] > max_value ) {
            max_value = originalArray[ i ];
        }
    }
    // поиск позиций минимальных и максимальных значений исходного массива и складываем их в массивы
    for ( i = 0; i < size; i++ ) {
        if ( originalArray[ i ] == min_value ) {
            minPositions[ num_min_value ] = i;
            ++num_min_value;
        } 
        else if ( originalArray[ i ] == max_value ) {
            maxPositions[ num_max_value ] = i;
            num_max_value++;
        }
    }

    // Вывод минимального и максимального значений массива
    printf( "Минимум: %u\nМаксимум: %u\n\n", min_value, max_value ); 

    printf( "Количество минимальных значений: %u\nКоличество максимальных значений: %u\n", num_min_value, num_max_value ); 

    // Вывод найденных позиций значений 0
    printf( "\n%s\n", "Позиции минимальных значений:" );
    for ( int i = 0; i < num_min_value; i++ ) {
        printf( "%-4d ", minPositions[ i ] );
        if( i % 28 == 27 ) {
            puts("");
        }
    }

    // Вывод найденных позиций значений 255
    printf( "\n\n%s\n", "Позиции максимальных значений:" );
    for ( int i = 0; i < num_max_value; i++ ) {
        printf( "%-4d ", maxPositions[ i ] );
        if( i % 28 == 27 ) {
            puts("");
        }
    }
    puts( "" );
    return 0;
} // конец main
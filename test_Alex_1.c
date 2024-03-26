
#include <stdio.h> // ЗФСБ С ввода вывода
#include <stdint.h> // ЗФСБ С целочисленные типы uint8_t, uint16_t...
#include <stddef.h> // ЗФСБ С size_t беззнаковые целочисленные типы макросы работа с памятю 
#define SIZE 512 // ДП

int main ( void ) { // выполнение программы начинается с функции main
    uint8_t originalArray[ SIZE ]; // исходящий массив
    uint8_t min_element_Array[ SIZE ] = { 0 }; // массив минимальных значений
    uint8_t max_element_Array[ SIZE ] = { 0 }; // массив максимальных значений
    unsigned int minimum = 0; // минимальное значение исходящего массива
    unsigned int maximum = 0; // максимальное значение исходящего массива
    unsigned int min_element = 0; // количество минимальных элементов
    unsigned int max_element = 0; // количество максимальных элементов
    unsigned int size; // зармер массива
    size_t i; // счетчик

    size = sizeof( originalArray ) / sizeof( originalArray[ 0 ] ); // вычисляем размер массива

    // поиск минимального и максимального значения массива
    for( i = 0; i < size; ++i ) {
        if ( originalArray[ i ] < minimum ) {
            minimum = originalArray[ i ];
        }
        else if( originalArray[ i ] > maximum ) {
            maximum = originalArray[ i ]; 
        }
    }   

    // поиск количества минимальных и максимальных значений
    for( i = 0; i < size; ++i ) {
        if ( originalArray[ i ] == minimum ) {
            min_element_Array[ minimum ] = i;
            //++min_element;
        }
        else if( originalArray[ i ] == maximum ) {
            max_element_Array[ maximum ] = i;
        }
    }
    
}
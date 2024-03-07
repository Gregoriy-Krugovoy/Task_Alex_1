// Задача Alex #1
// Имеется массив из 512 елементов.
// Каждый елемент массива - целое число в диаппазоне 
// от 0 до 255. Необходимо найти минимальное и максимальное значение 
// массива, а также их позиции в массиве.
#include <stdio.h> // ЗФСБ С ввода вывода
#include <stddef.h> // ЗФСБ С определяющий тип size_t, wchar_t, макросы NULL и offsetof
#include <stdlib.h> // ЗФСБ С ПГСЧ, выдиление памяти, преобразование строк в целые числа
#include <time.h> // ЗФСБ С содержит функции и переменные для работы с датой и времинем
#define SIZE 512 // количество елементов массива

int main ( void ) { // выполнение программы начинается с функции main

    int a[ SIZE ] = { 0 }; // массив из 512 елементов
    size_t b; // счетчик 
    size_t c; // значение от 0 до 512

    srand( time ( NULL ) ); // задать начальное значение ГСЧ текущим времинем

    // инициализация массива целыми числами от 0 до 255
    for( b = 0; b <= SIZE; ++b ) {
        c = 0 + rand() % 255;
        a[ b ] = c;
        if( a[ b ] < 1 ) { // поиск елементов со значением 0
            printf( "Element: [ %zu ]   Value: = 0", b ); // вывод результатов
            puts( "" );
        } // конец if

    } // конец for 

}

    // printf( "%s%8s", "Minimum: ", "Maximum: " );}
//
// Created by user on 19.03.2021.
//
#ifndef C_ROCKETBEANS_WORK2_PHOENIXLIB_H
#define C_ROCKETBEANS_WORK2_PHOENIXLIB_H

#endif //C_ROCKETBEANS_WORK2_PHOENIXLIB_H

// Created by ChillMouse at 19.02.2021.
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

void _getException(char *words){printf("\n\n ===========\n WARNING! \n\n %s \n\n ===========\n", words);} // Стилизованное предупреждение.

int getFactorial(unsigned short k){ // Факториал числа.
    unsigned short j = 1,
            i = 1,
            * pJ = &j, // Это указатели. *pJ - обратится к существующему значению. &j - это абсолютный адрес на переменную.
    * pI = &i,
            * pK = &k; // Обращение по адресам.

    if (*pK <= 0){
        *pJ = 0;
        _getException("!!! Factorial args <= 0 !!!");
    }
    else{
        for (*pI; *pI <= *pK; *pI += 1){
            *pJ *= *pI;
        }
    }
    return *pJ;
}

void pauseConsole(){
    system("pause"); // Поставить на паузу консоль Windows
}

void translateOutput(){
    SetConsoleCP(CP_UTF8); // Вывод в консоль кириллицу
    SetConsoleOutputCP(CP_UTF8);
}
/// Русские буквы в консоль: SetConsoleCP(1251); SetConsoleOutputCP(1251);
///  или.   SetConsoleCP(CP_UTF8); SetConsoleOutputCP(CP_UTF8);
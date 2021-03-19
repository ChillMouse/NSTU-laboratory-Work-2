#include "phoenixLib.h"

char* changeString(char str[]); // Резервация функции.
int main(){

    char str[50]; // Объявил массив символов.
    gets(str); // Ввёл строку.

    puts(str); // Вывел начальную строку
    puts(changeString(str)); // Вывел строку с преобразованиями.

    return 0;
}

char* changeString(char str[]){
    int i = 0;

    workLabel: // Это метка

    switch (str[i]) { // Замена символов.
        case ')':
        case '}':
            str[i] = ']';
            break;

        case '(':
        case '{':
            str[i] = '[';
            break;

        case 'a':
        case 'A':
            str[i] = '1';
            break;

        case 'b':
        case 'B':
            str[i] = '2';
            break;

        case 'c':
        case 'C':
            str[i] = '3';
            break;

        case 'd':
        case 'D':
            str[i] = '4';
            break;

        case 'e':
        case 'E':
            str[i] = '5';
            break;

        case 'f':
        case 'F':
            str[i] = '6';
            break;
    }

    if (i < 50){
        i++;
        goto workLabel; // Возврат к метке.
    }

    return str;
}
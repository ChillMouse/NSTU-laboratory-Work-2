#include "phoenixLib.h"

char* changeString(char str[]); // Резервация функции.
int event2_2();
int event2_3();

int main(){
    translateOutput(); // Перевод консоли на кириллицу.

    char str[50]; // Объявил массив символов.
    printf("Event 2.1\n Вводите cтроку. \n\n");
    gets(str); // Ввёл строку.

    puts(str); // Вывел начальную строку
    puts(changeString(str)); // Вывел строку с преобразованиями.
    event2_2();
    event2_3();

    return 0;
}

char* changeString(char str[]){
    int i = 0;

    workLabel: // Это метка

    if ((str[i] == ')') || (str[i] == '}')) str[i] = ']';
    if ((str[i] == '(') || (str[i] == '{')) str[i] = '[';
    if ((str[i] == 'a') || (str[i] == 'A')) str[i] = '1';
    if ((str[i] == 'b') || (str[i] == 'B')) str[i] = '2';
    if ((str[i] == 'c') || (str[i] == 'C')) str[i] = '3';
    if ((str[i] == 'd') || (str[i] == 'D')) str[i] = '4';
    if ((str[i] == 'e') || (str[i] == 'E')) str[i] = '5';
    if ((str[i] == 'f') || (str[i] == 'F')) str[i] = '6';

    if (i < 50){
        i++;
        goto workLabel; // Возврат к метке.
    }

    return str;
}
int event2_2() {
    char str[80];
    printf("Event 2.2\nВводите cтроку. \n\n");
    gets(str);
    int i = 0;
    loop:
    if (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'F')
            str[i] = str[i] - 'A' + '1';
        else if (str[i] == '(')
            str[i] = '[';
        else if (str[i] == ')')
            str[i] = ']';
        else if (str[i] == '{')
            str[i] = '[';
        else if (str[i] == '}')
            str[i] = ']';
        ++i;
        goto loop;
    }
    puts(str);
    return 0;
}

int event2_3() {
    char str[80];
    printf("Event 2.3\nВводите cтроку. \n\n");
    gets(str);
    int i = 0;
    loop:
    if (str[i]) {
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
        i++;
        goto loop;
    }
    puts(str);
}
#include "phoenixLib.h"

char* changeString(char str[]); // Резервация функции.
int main(){

    char str[50]; // Объявил массив символов.
    gets(str); // Ввёл строку.

    puts(str); // Вывел начальную строку
    puts(changeString(str)); // Вывел строку с преобразованиями.
    zadanie2();
    zadanie3();


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
  int zadanie2() {
      char str[80];
      gets(str);
      int i = 0;
      printf("Type text string\n");
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

int zadanie3() {
    char str[80];
    gets(str);
    int i = 0;
    printf("Type text string\n");
    loop:
    if (str[i]) {
        switch (str[i]) {
            case 'A':
                str[i] = '1';
                break;
            case 'B':
                str[i] = '2';
                break;
            case 'C':
                str[i] = '3';
                break;
            case 'D':
                str[i] = '4';
                break;
            case 'E':
                str[i] = '5';
                break;
            case 'F':
                str[i] = '6';
                break;
            case ')':
                str[i] = ']';
                break;
            case '(':
                str[i] = '[';
                break;
            case '{':
                str[i] = ']';
                break;
            case '}':
                str[i] = '[';
                break;


        }
        i++;
        goto loop;
    }
    puts(str);
}

/*
 * За счет использования функций чтения-записи, не предназначенных для
 * использования в многопоточных программах можно еще ускорить ввод-вывод.
 */

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar_unlocked()) != EOF) {
        putchar_unlocked(c);
    }
}

#include<stdio.h>
#include<cs50.h>
int main(void) /* Делаем задачку Марио. Рисуем полупирамидку.
Высота макисимум 23 */
{
    int height, s1, d;
      printf("Введите целое число от 0 до 23: "); // задаем высоту полупирамиды
    height = get_int(); /*  с помощью get_int() проверяется, целое ли число и число ли
вообще введено */
    while(height < 0 || height > 23) /* здесь делается проверка, правильно ли введено
число в тех пределах, которые необходимо. Если нет, требует ввести правильно */
    {
        printf("Retry: ");
        height = get_int();
         }
    for(s1 = 1; s1<=height; s1++)// s1 - номер строки, в которой пишем
    {
        d = 1; /* d -  номер символа, после окончания двух нижележащих циклов,
счетчик опять становится 1 */
        while(d < height + 1 - s1) // этим циклом вводим необходимое кол-во пробелов
        {
            printf(" ");
            d++;
        }
        while(d<= height + 1) // этим циклом вводим необходимое кол-во #
        {
            printf("#");
            d++;
        }
        printf("\n"); //начинаем работать с новой строкой
    }
   }

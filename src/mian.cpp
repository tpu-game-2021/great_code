#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif

int main() 
{
    int stringlengthmax = 1000;
    int stringlength = 0;

    for (int i = 0; i < stringlengthmax; i++)
    { 
        stringlength++;

        if (stringlength % 15 == 0)
        {
            printf("FizzBuzz, ");
        }
        else if (stringlength % 3 == 0)
        {
            printf("Fizz, ");
        }
        else if (stringlength % 5 == 0)
        {
            printf("Buzz, ");
        }
        else 
        {
            printf("%d, ",stringlength);
        }
    }
    system("PAUSE"); 
}
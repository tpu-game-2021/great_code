#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif

int main() 
{ 
    int mojisuu = 0;
     
    while (mojisuu++ < 1000)
    {
        //見づらいため、if文を使用。
        if (mojisuu % 15 == 0)
        {
          printf("FizzBuzz");
        }
        else if (mojisuu % 5 == 0)
        {
          printf("Buzz");
        }
        else if (mojisuu % 3 == 0)
        {
          printf("Fizz");
        }
        else
        {
          printf("%d", mojisuu);
        }
    }
    system("PAUSE"); 
}

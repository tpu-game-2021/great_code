#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif

int main()
{ 
  char mojiretsu[1000];
  int mojisuu = 0;
  
  while (mojisuu++ < 1000)
  {
    sprintf(mojiretsu, "%d", mojisuu);
    
    //3割り切りでFizz、5割り切りでBuzz、15割り切りでFizzBuzz
    //このままでは見辛いので、if文を用いる
    
    if(mojiretsu%3==0)
    {
      printf("Fizz");
    }
    
    else if(mojiretsu%5==0)
    {
      printf("Buzz");
    }
    
    else if(mojiretsu%15==0)
    {
      printf("FizzBuzz");
    }
    
  }
    
    system("PAUSE"); 
}

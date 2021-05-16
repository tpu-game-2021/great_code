char mojiretsu[1000];
int mojisuu = 0;
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif
int main() 
{ while (mojisuu++ < 1000) {
  sprintf(mojiretsu, "%d", mojisuu),
  
  if(mojisu % 15){
    printf("%s,","FizzBuzz");
  }
  else if(mojisuu % 5){
    printf("%s,","Buzz");
  }
  else if(mojisuu % 3){
    printf("%s,","Fizz");
  }
  //printf("%s, ", mojisuu % 15 ? mojisuu % 3 ? mojisuu % 5 ? mojiretsu : "Buzz" : "Fizz" : "FizzBuzz");
  system("PAUSE");
 }
}

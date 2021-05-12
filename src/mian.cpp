#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif

/*char型の配列は、最大4文字（4桁）分しか使わないので、
  要素数を1000から5（4桁分+ナル文字）に減らしました。*/
#define Max 5

char mojiretsu[Max];
int mojisuu = 0;

int main() 
{ 
	while (mojisuu++ < 1000)
	{
		sprintf(mojiretsu, "%d", mojisuu);
		//15で割り切れる場合
		if (mojisuu % 15 == 0)
		{
			printf("%s, ", "FizzBuzz");
		}
		//3で割り切れる、かつ、15で割り切れない場合
		else if (mojisuu % 3 == 0)
		{
			printf("%s, ", "Fizz");
		}
		//5で割り切れる、かつ、15で割り切れない場合
		else if (mojisuu % 5 == 0)
		{
			printf("%s, ", "Buzz");
		}
		//15でも、3でも、5でも割り切れない場合
		else
		{
			printf("%s, ", mojiretsu);
		}
	}

	system("PAUSE");
}
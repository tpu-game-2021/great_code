#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

#define MAX_ARRAY 1000

#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif

int main() 
{ 
	char mojiretsu[MAX_ARRAY];

	//元のソースコード
	//char mojiretsu[MAX_ARRAY];
	//int mojisuu = 0;
	//while (mojisuu++ < 1000)
	//{
	//	sprintf(mojiretsu, "%d", mojisuu);
	//	printf("%s, ", mojisuu % 15 ? mojisuu % 3 ? mojisuu % 5 ? mojiretsu : "Buzz" : "Fizz" : "FizzBuzz");
	//}

	//1～999まで
	for (int i = 1; i < MAX_ARRAY; i++)
	{
		sprintf(mojiretsu, "%d", i);

		//割り切りが15ならFizzBuzz,5ならBuzz,3ならFizzと表示 それ以外は数字を表示
		if (i % 15 == 0)
		{
			printf("%s, ", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s, ", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s, ", "Fizz");
		}
		else
		{
			printf("%s, ", mojiretsu);
		}
	}

	system("PAUSE"); 
}
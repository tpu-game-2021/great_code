#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
	char mojiretsu[1000];
	int mojisuu = 0;


	while (mojisuu++ < 1000)
	{
		//第2引数にmojiretsuのメモリサイズを指定し、mojisuuを整数で表示する。
		sprintf_s(mojiretsu, sizeof(mojiretsu), "%d,", mojisuu);

		//三項演算子では見づらいため、if文を用いる。
		if (mojisuu % 15 == 0)
		{
			printf("FizzBuzz, ");
		}
		else if (mojisuu % 5 == 0)
		{
			printf("Buzz, ");
		}
		else if (mojisuu % 3 == 0)
		{
			printf("Fizz, ");
		}
		else
		{
			printf("%d, ", mojisuu);
		}
	}
	system("PAUSE");
}
#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
	int mojisuu = 0;

	while (mojisuu++ < 1000)
	{
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
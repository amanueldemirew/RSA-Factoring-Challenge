#include "main.h"
#include <string.h>
/**
* main - monty code interpreter
* @argc: number of arguments
* Return: 0 on success
*/

int prime_factor(char *num)
{
	unsigned long long num1;
	unsigned long long i;
	int j;
	for(j = 0; j <= strlen(num); j++)
	{
		if (num[j] == '\n')
			num[j] = '\0';
	}

	num1 = atoi(num);
	i = 2;
	while(i <= num1)
	{
		if (num1 % i == 0)
		{
			 printf("%llu=%llu*%llu\n",num1 , num1/i, i);
			 break;
		}
		i += 1;
	}
	return (0);
}

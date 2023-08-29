#include "main.h"
#include <string.h>
/**
* main - monty code interpreter
* @argc: number of arguments
* Return: 0 on success
*/

int prime_factor(char *num)
{
	u_int32_t num1;
	u_int32_t i;
	int j;
	num1 = atoi(num);
	for(j = 0; j <= strlen(num); j++)
	{
		if (num[j] == '\n')
			num[j] = '\0';
	}

	i = 2;
	while(i <= num1)
	{
		if (num1 % i == 0)
		{
			 printf("%u=%d*%d\n",num1 , num1/i, i);
			 break;
		}
		i += 1;
	}
	return (0);
}

#include "main.h"

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	FILE *fd;
	char *number = NULL;
	size_t digit;
	size_t line;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: RSA file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while((line=getline(&number, &digit, fd)) != -1)
	{
		prime_factor(number);
	}
	free(number);
	fclose(fd);

	return (0);
}

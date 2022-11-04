#include <stdio.h>
#include <main.h>

/**
 * main - print the name of the program
 * @argc: Count the argument
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguements*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}

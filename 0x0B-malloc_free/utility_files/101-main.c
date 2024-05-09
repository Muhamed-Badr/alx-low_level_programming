#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * free_tab - frees an array of string
 * @tab: The array to free
 *
 * Return: nothing
 */
void free_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	free_tab(tab);
	return (0);
}

#include <unistd.h>
#include <stdio.h>
int _strlen(char *s);
char *_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
	char buf[1024];
	int x = -1;

	buf[0] = '\0';

	if (argc != 2)
	{
		_strcat(buf, "Usage: ");
		_strcat(buf, argv[0]);
		_strcat(buf, " \"string\"\n\a");
		write(1, buf, _strlen(buf));
		return (1);
	}

	write(1, argv[1], _strlen(argv[1]));
	write(1, "Hello, 'a' \\\"\n" "hi\n", _strlen("Hello, 'a' \\\"\n""hi\n"));
	/* write(1, argv[1], 7); */

	printf("Hello, %% hi \"hi\" \n" "hi\n");

	printf("[int] x: %d\n", x);
	printf("[unsigned int] x: %d\n", (unsigned int)x);

	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the passed string
 *
 * Return: length of the passed string
 */
int _strlen(char *s)
{
	int length = 0;

	/* s[length] == *(s + length) */

	while (s[length])
		length++;

	return (length);
}

/**
 * _strcat - concatenates two strings
 * @dest: 1nd pointer parameter
 * @src: 2st pointer parameter
 *
 * Description: This function appends the 'src' string to the 'dest' string,
 * overwriting the terminating null byte (\0) at the end of 'dest',
 * and then adds a terminating null byte
 *
 * Return: pointer to new 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	/* get the length of 'dest' string */
	for (i = 0, dest_len = 0; dest[i]; dest_len++, i++)
		;

	for (i = 0; src[i]; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

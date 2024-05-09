#include "main.h"
unsigned int _word_counter(char *s);

/**
 * strtow - splits a string into words in 2D array(1D array of strings).
 * @str: pointer to the passed string
 *
 * Description: creates a 2D array with characteristics:
 *               - Each element of 2D array contains only a single word,
 *                  null-terminated('\0')
 *               - The last element of the 2D array is NULL('\0')
 *
 * Note: Words in 'str' should separated by spaces.
 *
 * Return: On success, pointer to the 2D array.
 *         On Failure OR if `str = NULL || str == ""`, NULL.
 */
char **strtow(char *str)
{
	char **word_arr;
	unsigned int char_pos, i, j, word_len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* gets the number of words in `str` */
	word_count = _word_counter(str);
	if (word_count == 0)
		return (NULL);

	/* Allocate memory for the 2D array based on the number of words found */
	word_arr = malloc(sizeof(*word_arr) * (word_count + 1));
	if (word_arr == NULL)
		return (NULL);

	/* Allocate memory for each word in `str` & copy it in allocated memory */
	for (i = 0, char_pos = 0; i < word_count; i++)
	{
		word_len = 0; /* reset it for each word */
		while (str[char_pos] == ' ') /* Skip spaces ' ' */
			char_pos++;

		/* Calculate each word length in `str` */
		while (str[char_pos] != ' ' && str[char_pos] != '\0')
		{
			char_pos++;
			word_len++;
		}

		/* Allocate memory for each word, including termination-null('\0') */
		word_arr[i] = malloc(sizeof(**word_arr) * (word_len + 1));
		if (word_arr[i] == NULL) /* free 2D array in failure */
		{
			for (j = 0; j < i; j++)
				free(word_arr[j]);
			free(word_arr);
			return (NULL);
		}

		/* copy each word in `str` into a separated 1D array of [i] */
		for (j = 0; j < word_len; j++)
			word_arr[i][j] = str[(char_pos - word_len) + j];
		word_arr[i][j] = '\0'; /* set the word termination-null('\0') */
	}

	word_arr[i] = NULL; /* set the last element in the 2D array to NULL */

	return (word_arr);
}

/**
 * _word_counter - Calculate the number of words in `s`
 * @s: pointer to the passed string
 *
 * Return: number of words in `s`
 */
unsigned int _word_counter(char *s)
{
	unsigned int word_count = 0;

	/* Calculate the number of words in `str` */
	while (*s != '\0')
	{
		if (*s == ' ') /* Skip spaces ' ' */
			s++;
		else /* count words */
		{
			while (*s != ' ' && *s != '\0')
				s++;
			word_count++;
		}
	}

	return (word_count);
}

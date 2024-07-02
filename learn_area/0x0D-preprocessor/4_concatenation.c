#include <stdio.h>
#define COMMAND(NAME)  { #NAME, NAME ## _command }

struct command
{
	char *name;
	void (*function) (void); // pointer to a function
};

void quit_command(void);
void help_command(void);

/*
 * Concatenation (token pasting/token concatenation) ‘##’:
 *   The ‘##’ preprocessing operator performs token pasting. When a macro
 *   is expanded, the two tokens on either side of each ‘##’ operator are
 *   combined into a single token. However, two tokens that don’t together
 *   form a valid token cannot be pasted together.
 *   Token pasting is most useful when one or both of the tokens comes from
 *   a macro argument. If either of the tokens next to an ‘##’ is a parameter
 *   name, it is replaced by its actual argument before ‘##’ executes.
 *   (run `cpp file`)
 */

/*
 * Consider a C program that interprets named commands. There probably needs to
 *  be a table of commands, perhaps an array of structures declared as follows:
 *
 * ```C
 * struct command
 * {
 *     char *name;
 *     void (*function) (void); // pointer to a function
 * };
 * ```
 * then we will creat an array of struct in `main()`:
 * ```C
 * struct command commands[] =
 * {
 *     { "quit", quit_command },
 *     { "help", help_command },
 *     ...
 * };
 * ```
 *+======
 * BUT, it would be cleaner if we use token pasting as the fellow:
 * ```C
 * #define COMMAND(NAME)  { #NAME, NAME ## _command }
 *
 * struct command
 * {
 *     char *name;
 *     void (*function) (void); // pointer to a function
 * };
 * ```
 * then we will creat an array in `main()`:
 * ```C
 * struct command commands[] =
 * {
 *     COMMAND (quit),
 *     COMMAND (help),
 *     ...
 * };
 * ```
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc < 2)
	{
		printf("Usage: %s command_name\n", *argv);
		return (0);
	}

	struct command commands[] =
	{
		COMMAND (quit),
		COMMAND (help),
	};

	/*
	 * Not completed search
	 *  because to run a specific `command_fun`, the provided `command_name`
	 *  in CLI as an argument to the program it must match both the name &
	 *  position that stores in array as it provided in CLI
	 *
	 * so to run `quit_command() and help_command()` function
	 *  the `quit_command()` must be in `commands` array in index[0], and
	 *  name == "quit"
	 *  the `help_command()` must be in `commands` array in index[1], and
	 *  name == "help"
	 *
	 * EX:-
	 * ```shell
	 * ./prog quit help   # the quit & help both will run 
	 * ./prog help quit   # the quit & help both will not run 
	 * ./prog help        # the help will not run 
	 * ./prog quit        # the quit will run 
	 * ```
	 */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] != commands[i - 1].name[j])
				break;
		if (argv[i][j] == commands[i - 1].name[j])
			commands[i - 1].function();
	}

	return (0);
}

void quit_command(void)
{
	puts("Run function `quit();`");
}

void help_command(void)
{
	puts("Run function `help();`");
}


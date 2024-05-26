#include <stdio.h>
#include <stdlib.h>

int main(voiid)
{
	int *ptr;
	char *str;
	char *s = "Hello, world!\n";
	/* ptr = (int*)malloc(sizeof(int)); */
	ptr = malloc(sizeof(int));
	str = malloc(sizeof(*str) * sizeof("Say Hi :)\n"));

	if (ptr == NULL || str == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
	*ptr = 42;

	str[0] = 'S';
	str[1] = 97;
	str[2] = 'y';
	str[3] = ' ';
	str[4] = 'H';
	str[5] = 'i';
	str[6] = ' ';
	str[7] = ':';
	str[8] = ')';
	str[9] = '\n';
	/*
	   str[10] = 'S';
	   str[11] = 'a';
	   str[12] = 'y';
	   str[13] = ' ';
	   str[14] = 'H';
	   str[15] = 'i';
	   str[16] = ' ';
	   str[17] = ':';
	   str[18] = ')';
	   str[19] = '\n';
	   str[25] = '\n';
		//str[26] = '\n'; // here will occur an error
		//the error is:
		//```shell
		//malloc(): corrupted top size
		//Aborted (core dumped)
		//```
		//and this typically indicates a memory corruption issue in your program.
		//This error occurs when the memory allocator (malloc()) detects that
		//the metadata associated with allocated memory blocks has been corrupted.
	*/

	printf("The value stored at the allocated memory location[%p] is: %d\n", ptr, *ptr);
	printf("The value stored at the allocated memory location[%p] is: %s", s, s);
	printf("The value stored at the allocated memory location[%p] is: %s\n", str, str);
	/*
	 if you try this `ptr++;` or `str++;` before free them
	 or try to `free(s);` which `s` points to a location in the stack
	 In all of these cases, this error will occur 
	 ```shell
	 free(): invalid pointer
	 Aborted (core dumped)
	 ```
	*/
	free(ptr);
	/*
	   free(ptr); // here will occur an error
		//the error is:
		//```shell
		//free(): double free detected in tcache 2
		//Aborted (core dumped)
		//```
	*/
	free(str);
	str[0] = 'h';
	str[1] = 'i';
	str[7] = ':';
	str[8] = ')';
	puts("\tafter free the allocated memory location");
	printf("The location is: %p & value at it is: %d\n", ptr, *ptr);
	printf("The location is: %p & value at it is: %s\n", str, str);
	ptr = NULL;
	str = NULL;

	return 0;
}

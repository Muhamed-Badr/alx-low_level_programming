#include <stdio.h>

void fun(int *main_local_var_addr)
{
	int fun_local_var;

	if (&fun_local_var > main_local_var_addr)
		printf("stack grows upward\n");
	else
		printf("stack grows downward\n");
}

int main(void)
{
	int main_local_var;

	fun(&main_local_var);

	return (0);
}

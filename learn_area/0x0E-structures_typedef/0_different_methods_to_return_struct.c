#include <stdio.h>
#include <stdlib.h>
/*
 * For more information visit:
 *    -> https://chatgpt.com/share/95810a7f-568d-4bdd-ad3e-f826e911f732
 */
struct User
{
	char *name, *email;
	int age;
};

struct point
{
	char x, y;
	double a;
	int b;
};
void print_user(struct User *user, char user_num);
struct User *new_user_ret_ptr_heap(char *name, char *email, int age);
struct User new_user_ret_stack(char *name, char *email, int age);
struct User *new_user_ret_ptr_stack(char *name, char *email, int age);

int main(void)
{
	char name2[] = "Foo";
	char name3[] = "FOO_ret_stack";
	/* char name4[] = "FOO_ret_ptr_stack"; */
	struct User u1, *u2, u3/* , *u4 */;

	u1.name = "momo";
	u1.email = "momo@gmail.com";
	u1.age = 98;

	/*===SECTION A: Test size of structure======================================*/
	printf("sizeof(struct point): %lu\n", sizeof(struct point));
	puts("\t============");

	printf("sizeof(struct User): %lu\n", sizeof(struct User));

	/*===SECTION B: Trying to edit string literal(stored in '.rodata' segment)==*/

	puts("====================================");
	printf("u1.name: %s\n", u1.name);
	printf("u1.email: %s\n", u1.email);
	printf("u1.age: %d\n", u1.age);

	/*
	   puts("\t============");
	   puts("After trying to edit u1.name");

	   u1.name[0] = 'u';

	   printf("u1.name: %s\n", u1.name);
	   printf("u1.email: %s\n", u1.email);
	   printf("u1.age: %d\n", u1.age);
	   */

	/*===SECTION C: Trying to return different types of structue================*/

	puts("====================================");
	/* u2 = new_user_ret_ptr_heap("Foo", "Foo@gmail.com", 50); */
	u2 = new_user_ret_ptr_heap(name2, "Foo@gmail.com", 50);
	print_user(u2, 2);

	puts("\t============");
	printf("array of chars `name2[]`: %s\n", name2);


	puts("====================================");
	/* u3 = new_user_ret_stack("FOO_ret_stack", "Foo@gmail.com", 60); */
	u3 = new_user_ret_stack(name3, "Foo@gmail.com", 60);
	print_user(&u3, 3);

	puts("\t============");
	printf("array of chars `name3[]`: %s\n", name3);

	/*
	   puts("======\nreturn to main():");
	   printf("Address of u3.name : %p\n", u3.name);
	   printf("Address of u3.email: %p\n", u3.email);
	   printf("Address of u3.age  : %p\n", (void *)&u3.age);
	   */

	puts("====================================");

	/*
	 * This is a dangerous parti (results in undefined behavior)
	 */

	/*u4 = new_user_ret_ptr_stack("FOO_ret_ptr_stack", "Foo@gmail.com", 70);*/
	/*
	   u4 = new_user_ret_ptr_stack(name4, "Foo@gmail.com", 70);
	   print_user(u4, 4);
	   */


	return (0);
}

void print_user(struct User *u, char user_num)
{

	printf("u%d->name: %s\n", user_num, u->name);
	printf("u%d->email: %s\n", user_num, u->email);
	printf("u%d->age: %d\n", user_num, u->age);

	puts("\t============");
	printf("After trying to edit u%d->name\n", user_num);

	u->name[0] = 'u';
	/* u->age++; */
	printf("u%d->name: %s\n", user_num, u->name);
	printf("u%d->email: %s\n", user_num, u->email);
	printf("u%d->age: %d\n", user_num, u->age);

}

struct User *new_user_ret_ptr_heap(char *name, char *email, int age)
{
	struct User *tmp_user;

	tmp_user = malloc(sizeof(struct User));
	if(tmp_user == NULL)
		return (NULL);

	tmp_user->name = name;
	tmp_user->email = email;
	tmp_user->age = age;

	return (tmp_user);
}

struct User new_user_ret_stack(char *name, char *email, int age)
{
	struct User tmp_user;

	tmp_user.name = name;
	tmp_user.email = email;
	tmp_user.age = age;
	/*
	   puts("inside function:");
	   printf("Address of tmp_user.name : %p\n", tmp_user.name);
	   printf("Address of tmp_user.email: %p\n", tmp_user.email);
	   printf("Address of tmp_user.age  : %p\n", (void *)&tmp_user.age);
	   puts("======");
	   */

	return (tmp_user);
}

/*===========================================================================*/
/*
 * This method is invalid(returns a dangling pointer), and its behavior
 * is undefined
 * Explanation in details:
 * Stack Memory and Function Calls
 *  1. Stack Allocation:
 *      When a function is called, a new stack frame is created.
 *      This stack frame contains all the local variables of the function,
 *      including any structs allocated on the stack.
 *  2. Function Return:
 *      When the function returns, its stack frame is popped off the stack.
 *      The memory occupied by the local variables is no longer reserved for
 *      that function and can be overwritten by subsequent function calls
 *      or other operations.
 *  3. Dangling Pointer:
 *      A pointer to a local variable in a function becomes a dangling pointer
 *      once the function returns. This pointer still holds the address of
 *      where the local variable used to be, but that memory is no longer
 *      reserved for the local variable and might have been reused 
 *      for other purposes.
 */
/*
   struct User *new_user_ret_ptr_stack(char *name, char *email, int age)
   {                       
   struct User tmp_user;
// struct User *ptr = &tmp_user;

tmp_user.name = name;
tmp_user.email = email;
tmp_user.age = age;

return (&tmp_user);
// return (ptr);
}
*/



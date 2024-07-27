#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int id;
	char *name;
} Person;

Person shallow_copy(Person *original);
Person deep_copy(Person *original);
void print_p1_p2(Person *p1, Person *p2);

/*
 * Shallow and Deep Copy in C:
 *  In C, the concepts of shallow and deep copy are related to how
 *   data structures, such as arrays and structs, are duplicated.
 *   Understanding these concepts is crucial for avoiding bugs and
 *   managing memory effectively, especially when dealing with
 *   dynamically allocated memory.
 *  1. Shallow Copy:
 *      A shallow copy of an object copies all of its members, but it doesn't
 *       create copies of objects that the original object points to. This
 *       means that both the original and the copied object share the same
 *       references to the same allocated memory.
 *  2. Deep Copy:
 *      A deep copy of an object duplicates everything, including any objects
 *       it points to. This means that the original and the copied object have
 *       their own separate copies of all allocated memory.
 *
 * Key Differences:
 *  1. Memory Sharing:
 *      Shallow Copy: Shares memory between the original and the copied object.
 *      Deep Copy   : Duplicates all memory, ensuring separate copies.
 *  2. Performance:
 *      Shallow Copy: Generally faster because it only copies pointers.
 *      Deep Copy   : Slower due to the need to allocate memory and copy data.
 *  3. Safety:
 *      Shallow Copy: Can lead to issues if one of the objects modifies shared
 *                     data or frees the memory.
 *      Deep Copy   : Safer as each object manages its own memory.
 *  4. Use Cases:
 *      Shallow Copy: Suitable when you want to share data and minimize memory
 *                     usage.
 *      Deep Copy   : Necessary when objects should be independent, such as
 *                     when dealing with resource management.
 *
 * [+]Note:
 *      1. i can use '=' operator with instances from the same struct type,
 *          to perform a shallow copy from right-hand side to left-hand side.
 */

int main()
{
	{
		/*===Shallow Copy===========================================================*/
		Person p1, p2;
		p1.id = 1;

		puts("\t+--------------+");
		puts("\t| Shallow copy |");
		puts("\t+--------------+");
		p1.name = (char *)malloc(50 * sizeof(char));
		strcpy(p1.name, "name_1");

		/* p2 = p1; */
		p2 = shallow_copy(&p1);/* this line is equivalent to the previous one */

		print_p1_p2(&p1, &p2);

		/* Modify the p2 members (p2.id & p2.name) */
		p2.id = 2;
		strcpy(p2.name, "name_2");

		/* Both p1 and p2 reflect the change */
		puts("\t============");
		puts("After modify the (p2.id & p2.name):");
		puts("======");
		print_p1_p2(&p1, &p2);

		puts("\t============");
		puts("Print Addresses of p1/p2 members");
		puts("======");
		puts("Original:");
		printf("\tp1.id  : %p\n", (void *)&p1.id);
		printf("\tp1.name: %p\n", p1.name);
		puts("Copy:");
		printf("\tp2.id  : %p\n", (void *)&p2.id);
		printf("\tp2.name: %p\n", p2.name);

		free(p1.name);
	}

	puts("========================================");

	{
		/*===Deep Copy==============================================================*/
		Person p1, p2;
		p1.id = 1;

		puts("\t+-----------+");
		puts("\t| Deep copy |");
		puts("\t+-----------+");
		p1.name = (char *)malloc(50 * sizeof(char));
		strcpy(p1.name, "name_1");

		p2 = deep_copy(&p1);

		print_p1_p2(&p1, &p2);

		/* Modify the p2 members (p2.id & p2.name) */
		p2.id = 2;
		strcpy(p2.name, "name_2");

		/* Only p2 reflects the change, p1 remains unchanged */
		puts("\t============");
		puts("After modify the (p2.id & p2.name):");
		puts("======");
		print_p1_p2(&p1, &p2);

		puts("\t============");
		puts("Print Addresses of p1/p2 members");
		puts("======");
		puts("Original:");
		printf("\tp1.id  : %p\n", (void *)&p1.id);
		printf("\tp1.name: %p\n", p1.name);
		puts("Copy:");
		printf("\tp2.id  : %p\n", (void *)&p2.id);
		printf("\tp2.name: %p\n", p2.name);

		free(p1.name);
		free(p2.name);
	}

	return 0;
}

Person shallow_copy(Person *original)
{
	Person copy;
	copy.id = original->id;
	copy.name = original->name;
	/* Only the pointer is copied, not the string itself */

	return (copy);
}

Person deep_copy(Person *original)
{
	Person copy;
	copy.id = original->id;
	copy.name = (char *)malloc(strlen(original->name) + 1);
	strcpy(copy.name, original->name);  /* Allocate and copy the string itself */

	return (copy);
}


void print_p1_p2(Person *p1, Person *p2)
{

	puts("Original:");
	printf("\tp1.id  : %d\n", p1->id);
	printf("\tp1.name: %s\n", p1->name);
	puts("Copy:");
	printf("\tp2.id  : %d\n", p2->id);
	printf("\tp2.name: %s\n", p2->name);

}


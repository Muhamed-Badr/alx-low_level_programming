#include <stdio.h>
#include <stdlib.h>

/* #pragma pack(1) */

struct pad1
{
	char c;
	int i;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 1 2 3 4 5 6 7
	 * size = |c|-|-|-|i|i|i|i|
	 */
}/*__attribute__((packed))*/ ; /* 8 Byte */

/* #pragma pack() */
struct pad2
{
	int i;
	char c;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 1 2 3 4 5 6 7
	 * size = |i|i|i|i|c|-|-|-|
	 */
};/* 8 Byte */

struct pad3
{
	char a, b;
	int i;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 1 2 3 4 5 6 7
	 * size = |a|b|-|-|i|i|i|i|
	 */
};/* 8 Byte */

struct pad4
{
	int i;
	char a, b;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 1 2 3 4 5 6 7
	 * size = |i|i|i|i|a|b|-|-|
	 */
};/* 8 Byte */

struct pad5
{
	char *p, c;
	int i;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 1 2 3 4 5 6 7 8 9 A B C D E F
	 * size = |p|p|p|p|p|p|p|p|c|-|-|-|i|i|i|i|
	 */
};/* 16 Byte */

struct pad6
{
	char *p, c;
	short int s;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 1 2 3 4 5 6 7 8 9 A B C D E F
	 * size = |p|p|p|p|p|p|p|p|c|-|s|s|-|-|-|-|
	 */
};/* 16 Byte */

struct pad7 /* The same as 'pad6' but its members are different in order */
{
	char c, *p;
	short int s;
	/*
	 * each one cell represent a one Byte
	 *
	 *         0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1
	 *         0 1 2 3 4 5 6 7 8 9 A B C D E F 0 1 2 3 4 5 6 7
	 * size = |c|-|-|-|-|-|-|-|p|p|p|p|p|p|p|p|s|s|-|-|-|-|-|-|
	 */
};/* 24 Byte */

struct pad8
{
	long l:32;
	unsigned int u:4;
	int i:12;
	short s:8;
	char c:8;
	/*
	 * each one cell represent a one bit
	 *
	 *         0 0 . . . 1 1 2 2 2 2 2 2 . . . 2 2 3 3 . . . 3 3 3 3 . . . 3 3
	 *         0 1 . . . E F 0 1 2 3 4 5 . . . E F 0 1 . . . 6 7 8 9 . . . E F
	 * size = |l|l|.|.|.|l|l|u|u|u|u|i|i|.|.|.|i|i|s|s|.|.|.|s|s|c|c|.|.|.|c|c|
	 */
};/* 8 Byte */

int main(void)
{

	/*
	   char a = 0;
	   int x = 0;
	   char b = 0;
	   char *p_a = &a, *p_b = &b;

	   char c = 0;
	   char d = 0;
	   int y = 0;
	   char *p_c = &c;
	   int *p_y = &y + 1;
	   */

	/*
	   printf("avoid unused variable: %d\n", (a + x + b));
	   printf("avoid unused variable: %d\n", (c + y + d));

	   puts("\t============");
	   */

	/*
	   printf("Address of {char a;}: %p\n", (void *)&a);
	   printf("Address of {int x;} : %p\n", (void *)&x);
	   printf("Address of {char b;}: %p\n", (void *)&b);
	   puts("\t============");

	   printf("Address of {char c;}: %p\n", (void *)&c);
	   printf("Address of {char d;}: %p\n", (void *)&d);
	   printf("Address of {int y;} : %p\n", (void *)&y);
	   puts("\t============");

	   printf("the size of local variables{char; int; char;}: %ld\n", ((char *)p_b - (char *)p_a));
	   printf("the size of local variables{char; char; int;}: %ld\n", ((char *)p_y - (char *)p_c));
	   puts("=========================================================");
	   */

	/*===SECTION A: Test size of structure======================================*/
	printf("sizeof(struct pad1) {char; int;}         : %lu\n", sizeof(struct pad1));
	puts("\t============");

	printf("sizeof(struct pad2) {int; char;}         : %lu\n", sizeof(struct pad2));
	puts("\t============");

	printf("sizeof(struct pad3) {2 char; int;}       : %lu\n", sizeof(struct pad3));
	puts("\t============");

	printf("sizeof(struct pad4) {2 int; char;}       : %lu\n", sizeof(struct pad4));
	puts("\t============");

	printf("sizeof(struct pad5) {char*; char; int;}  : %lu\n", sizeof(struct pad5));
	puts("\t============");

	printf("sizeof(struct pad6) {char*; char; short;}: %lu\n", sizeof(struct pad6));
	puts("\t============");

	printf("sizeof(struct pad7) {char; char*; short;}: %lu\n", sizeof(struct pad7));
	puts("\t============");

	printf("sizeof(struct pad8) {bit-fields}         : %lu\n", sizeof(struct pad8));
	puts("\t============");

	return (0);
}

# Welcome To 0x04-more_functions_nested_loops

Table of Contents
=================
* [Welcome To 0x04-more_functions_nested_loops](#welcome-to-0x04-more_functions_nested_loops)
* [Table of Contents](#table-of-contents)
* [Concepts](#concepts)
* [Resources](#resources)
    * [Read or watch:](#read-or-watch)
* [Learning Objectives](#learning-objectives)
    * [General](#general)
* [Requirements](#requirements)
    * [General](#general-1)
* [Quiz questions](#quiz-questions)
    * [Question #0](#question-0)
    * [Question #1](#question-1)
    * [Question #2](#question-2)
    * [Question #3](#question-3)
    * [Question #4](#question-4)
    * [Question #5](#question-5)
    * [Question #6](#question-6)
    * [Question #7](#question-7)
    * [Question #8](#question-8)
* [Tasks](#tasks)
    * [0.isupper](#0-isupper-0-isupperc-)
    * [1.isdigit](#1-isdigit-1-isdigitc-)
    * [2.Collaboration is multiplication](#2-Collaboration-is-multiplication-2-mulc-)
    * [3.The numbers speak for themselves](#3-The-numbers-speak-for-themselves-3-print_numbersc-)
    * [4.I believe in numbers and signs](#4-I-believe-in-numbers-and-signs-4-print_most_numbersc-)
    * [5.Numbers constitute the only universal language](#5-Numbers-constitute-the-only-universal-language-5-more_numbersc-)
    * [6.The shortest distance between two points is a straight line](#6-The-shortest-distance-between-two-points-is-a-straight-line-6-print_linec-)
    * [7.I feel like I am diagonally parked in a parallel universe](#7-I-feel-like-I-am-diagonally-parked-in-a-parallel-universe-7-print_diagonalc-)
    * [8.You are so much sunshine in every square inch](#8-You-are-so-much-sunshine-in-every-square-inch-8-print_squarec-)
    * [9.Fizz-Buzz](#9-Fizz-Buzz-9-fizz_buzzc-)
    * [10.Triangles](#10-Triangles-10-print_trianglec-)
    * [11.The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic](#11-The-problem-of-distinguishing-prime-numbers-from-composite-numbers-and-of-resolving-the-latter-into-their-prime-factors-is-known-to-be-one-of-the-most-important-and-useful-in-arithmetic-100-prime_factorc-100-prime_factor_2nd_solc-)
    * [12.Numbers have life; they're not just symbols on paper](#12-Numbers-have-life-theyre-not-just-symbols-on-paper-101-print_numberc-)

## Concepts
For this project, we expect you to look at this concept:
- [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](../concepts/docker_and_wsl.md)

## Resources
### Read or watch:

 - [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
 - [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
 - [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (stop at 14:00)
 - [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
 - [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (stop before the “Once-Only Headers” paragraph)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

### General
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to to use them with `#include`

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## More Info
You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

## Quiz questions
### Question #0
What is the return value of the following function?

```c
int some_function(void)
{
    printf("%d", 12);
    return (98);
}
```
 - [ ] 12
 - [x] 98
 - [ ] 402

### Question #1
What is the return value of the following function?

```c
int some_function(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    return(i);
}
```

 - [ ] 0123456789
 - [ ] 0
 - [ ] 9
 - [x] 10

### Question #2
What is the output of the following piece of code?

```c
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}
```

 - [ ] -9-8-7-6-5-4-3-2-1
 - [ ] 9876543210
 - [x] 987654321
 - [ ] -9-8-7-6-5-4-3-2-10

### Question #3
What is the output of the following piece of code?

```c
int i;

i = 0;
while (i < 10)
{
    i++;
    printf("%d", i / 2);
}
```

 - [ ] 0011223344
 - [ ] 0123456789
 - [x] 0112233445

### Question #4
What is the output of the following piece of code?

```c
int i;

i = 9;
while (--i)
{
    printf("%d", i);
}
```

 - [ ] 987654321
 - [x] 87654321
 - [ ] 9876543210
 - [ ] 876543210

### Question #5
What is the output of the following piece of code?

```c
int i;

i = 9;
while (i--)
{
    printf("%d", i);
}
```

 - [ ] 987654321
 - [ ] 87654321
 - [x] 876543210
 - [ ] 9876543210

### Question #6
What is the output of the following piece of code?

```c
int i;

i = 0;
while (i < 10)
{
    printf("%d", i % 2);
    i++;
}
```

 - [x] 0101010101
 - [ ] 0123456789
 - [ ] 1010101010

### Question #7
What is the output of the following piece of code?

```c
int i;

for (i = 0; i < 10; i++)
{
    printf("%d", i * 2);
}
```

 - [ ] 0123456789
 - [ ] 2468101214161820
 - [x] 024681012141618

### Question #8
What is the output of the following piece of code?

```c
int i;

for (i = 48; i < 58; i++)
{
OA    printf("%c", i);
}
```

 - [ ] 48495051525354555657
 - [x] 0123456789
 - [ ] School

## Tasks
### 0. isupper <sub>([0-isupper.c](0-isupper.c))</sub>
OA- **Description:** Write a function that checks for uppercase character.
    - Prototype: `int _isupper(int c);`
    - Returns `1` if `c` is uppercase
    - Returns `0` otherwise
FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

Example:
```shell
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
OA{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `0-isupper.c`

OA### 1. isdigit <sub>([1-isdigit.c](1-isdigit.c))</sub>
- **Description:** Write a function that checks for a digit (`0` through `9`).
    - Prototype: `int _isdigit(int c);`
    - Returns `1` if `c` is a digit
    - Returns `0` otherwise
FYI: The standard library provides a similar function: `isdigit`. Run `man isdigit` to learn more.

Example:
```shell
julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
OA    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `1-isdigit.c`

### 2. Collaboration is multiplication <sub>([2-mul.c](2-mul.c))</sub>
- **Description:** Write a function that multiplies two integers.
    - Prototype: `int mul(int a, int b);`

Example:
```shell
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
OA    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `2-mul.c`
OA
### 3. The numbers speak for themselves <sub>([3-print_numbers.c](3-print_numbers.c))</sub>
- **Description:** Write a function that prints the numbers, from `0` to `9`, followed by a new line.
    - Prototype: `void print_numbers(void);`
    - You can only use `_putchar` twice in your code
OA
Example:
```shell
julien@ubuntu:~/0x04$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
OA{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `3-print_numbers.c`

### 4. I believe in numbers and signs <sub>([4-print_most_numbers.c](4-print_most_numbers.c))</sub>
- **Description:** Write a function that prints the numbers, from `0` to `9`, followed by a new line.
    - Prototype: `void print_most_numbers(void);`
    - Do not print `2` and `4`
OA    - You can only use `_putchar` twice in your code

Example:
```shell
julien@ubuntu:~/0x04$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers 
01356789
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `4-print_most_numbers.c`

### 5. Numbers constitute the only universal language <sub>([5-more_numbers.c](5-more_numbers.c))</sub>
- **Description:** Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
    - Prototype: `void more_numbers(void);`
    - You can only use `_putchar` three times in your code

Example:
```shell
julien@ubuntu:~/0x04$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `5-more_numbers.c`

### 6. The shortest distance between two points is a straight line <sub>([6-print_line.c](6-print_line.c))</sub>
- **Description:** Write a function that draws a straight line in the terminal.
    - Prototype: `void print_line(int n);`
    - You can only use `_putchar` function to print
    - Where `n` is the number of times the character `_` should be printed
    - The line should end with a `\n`
    - If `n` is `0` or less, the function should only print `\n`

Example:
```shell
julien@ubuntu:~/0x04$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `6-print_line.c`

### 7. I feel like I am diagonally parked in a parallel universe <sub>([7-print_diagonal.c](7-print_diagonal.c))</sub>
- **Description:** Write a function that draws a diagonal line on the terminal.
    - Prototype: `void print_diagonal(int n);`
    - You can only use `_putchar` function to print
    - Where `n` is the number of times the character `\` should be printed
    - The diagonal should end with a `\n`
    - If `n` is `0` or less, the function should only print a `\n`

Example:
```shell
julien@ubuntu:~/0x04$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `7-print_diagonal.c`

### 8. You are so much sunshine in every square inch <sub>([8-print_square.c](8-print_square.c))</sub>
- **Description:** Write a function that prints a square, followed by a new line.
    - Prototype: `void print_square(int size);`
    - You can only use `_putchar` function to print
    - Where `size` is the size of the square
    - If `size` is `0` or less, the function should print only a new line
    - Use the character `#` to print the square

Example:
```shell
julien@ubuntu:~/0x04$ cat 8-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `8-print_square.c`

### 9. Fizz-Buzz <sub>([9-fizz_buzz.c](9-fizz_buzz.c))</sub>
- **Description:** The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.
Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
    - Each number or word should be separated by a space
    - You are allowed to use the standard library

Example:
```shell
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `9-fizz_buzz.c`

### 10. Triangles <sub>([10-print_triangle.c](10-print_triangle.c))</sub>
- **Description:** Write a function that prints a triangle, followed by a new line.
    - Prototype: `void print_triangle(int size);`
    - You can only use `_putchar` function to print
    - Where `size` is the size of the triangle
    - If `size` is `0` or less, the function should print only a new line
    - Use the character `#` to print the triangle

Example:
```shell
julien@ubuntu:~/0x04$ cat 10-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `10-print_triangle.c`

### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic <sub>([100-prime_factor.c](100-prime_factor.c), [100-prime_factor_2nd_sol.c](100-prime_factor_2nd_sol.c))</sub>
- **Description:** The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`.
Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
    - You are allowed to use the standard library
    - Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `100-prime_factor.c`

### 12. Numbers have life; they're not just symbols on paper <sub>([101-print_number.c](101-print_number.c))</sub>
- **Description:** Write a function that prints an integer.
    - Prototype: `void print_number(int n);`
    - You can only use `_putchar` function to print
    - You are not allowed to use `long`
    - You are not allowed to use arrays or pointers
    - You are not allowed to hard-code special values

Example:
```shell
julien@ubuntu:~/0x04$ cat 101-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x04$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x04$ 
```
 - **Repo:**
    - **GitHub repository:** `alx-low_level_programming`
    - **Directory:** `0x04-more_functions_nested_loops`
    - **File:** `101-print_number.c`




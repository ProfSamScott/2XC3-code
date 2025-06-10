/* Every code file should have a header comment with a
 * description of the purpose of this file and/or its
 * role in the larger project.
 *
 * Aim for self-documenting code (meaningful variable
 * and function names, obvious and clear code structure,
 * etc.) The easier the code is to read, the less you
 * need to comment.
 *
 * AUTHOR, DATE, VERSION go here
 */
#include <stdio.h>
#include <stdlib.h>

// Any non-obvious constants should be briefly explained

#define NUM1 10 // test constants
#define NUM2 20

// prototypes do not need comments

int process (int, int, int *, int *); 

/* A brief description of the main function, unless you
 * already described it in the file header. Exit codes
 * should be explained here. argc and argv do not require
 * explanation.
 */
int main() {
	// only comment the code if it's not obvious or to mark
	// sections if the function is very long
    int sub, mult, add;

    add = process(10, 20, &sub, &mult);

    printf("Addition, Subtraction, Multiplication: %d %d %d\n", add, sub, mult);

	return EXIT_SUCCESS;
}

/* Every function needs a header that briefly explains 
 * what it is for. All parameters, return values, and side
 * effects should be mentioned, but the comments can be 
 * quite brief.
 * 
 * For example, the lines below are enough for this function:
 * 
 * computes the sum, difference, and product of i and j.
 * *d = difference, *m = product
 * returns sum
 */
int process(int i, int j, int *d, int *m) {
    *d = i - j;
    *m = i * j;
    return i+j;
}


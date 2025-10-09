/* An example of how to correctly use malloc for a 2D array.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define R 4
#define C 3

int *get_array(int rows, int cols);

void main() {
    // getting the type right! p is a pointer to an array of length C
    // TODO - change to int * to see what happens
    // TODO - recast to int (*)[C] to fix
    int (*p)[C] = malloc(R*C*sizeof(int));
    
    // initialize
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            p[r][c] = (r+1)*(c+1);
        }
    }
    // print
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            printf("%5d",p[r][c]);
        }
        puts("");
    }
	puts("");

    // deallocate
    free(p);

    // Call a function that returns a 2D array
	// Note that you need to cast the result
    int (*b)[C] = (int(*)[C])get_array(R, C);

    // Print the array
    for (int r=0; r<R; r++) {
        for (int c=0; c<C; c++) {
            printf("%5d",b[r][c]);
        }
        puts("");
    }
    puts("");

	// deallocate
	free(b);
}

/* Creates and returns a 2D array 
   Note that we can't return int (*)[C] 
*/
int *get_array(int rows, int cols) {
    int (*a)[cols] = malloc(rows * cols * sizeof(int));
    for (int r=0; r<rows; r++)
        for (int c=0; c<cols; c++)
            a[r][c] = -1;
    return (int *)a;
}

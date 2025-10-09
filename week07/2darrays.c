/* Simple demo of 2D arrays
 *
 * Sam Scott, McMaster, 2025
 */
#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 10

int *get_array(int rows, int cols);

int main() {
    int a[R][C];

    // Initialize array as a multiplication table
    for (int r=0; r<R; r++) { 
        for (int c=0; c<C; c++) { 
            a[r][c] = (r+1) * (c+1);
        }
    }

    // Print the table
    for (int r=0; r<R; r++) { 
        for (int c=0; c<C; c++) { 
            printf("%5d",a[r][c]);
        }
        puts("");
    }
	puts("");

	// Call a function that returns a 2D array
	int (*b)[C] = (int(*)[C])get_array(R, C);

    // Print the array
    for (int r=0; r<R; r++) {
        for (int c=0; c<C; c++) {
            printf("%5d",b[r][c]);
        }
        puts("");
    }
	puts("");
}

/* creates and returns a 2D array */
int *get_array(int rows, int cols) {
    int (*a)[cols] = malloc(rows * cols * sizeof(int));
    for (int r=0; r<rows; r++)
        for (int c=0; c<cols; c++)
            a[r][c] = -1;
    return (int *)a;
}

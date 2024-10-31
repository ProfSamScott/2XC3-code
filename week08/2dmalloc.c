/* An example of how to correctly use malloc for a 2D array.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define R 4
#define C 3

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
    // deallocate
    free(p);
}

/* Simple demo of 2D arrays
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 10

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
}


/* Simple demo of pointers for arrays
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a[10] = {0, 5, 2, -3, 23, 1, 15, 17, 21}; 
	
    int *p = a;
	int *q = p+5;
	printf("%d, %d, %d\n", a[2], p[2], q[2]);

}

/* Using pointers to process an array.
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
	
    // Sum an array with a pointer in a for loop
	int sum = 0;
	for (int *p = a; p < &a[10]; p++) {
		sum += *p;
	}
	printf("%d\n", sum);

    // Sum an array with a pointer in a while loop
	sum = 0;
	int *p = a;
	while (p < a + 10)
    	sum += *p++;
	printf("%d\n", sum);

}

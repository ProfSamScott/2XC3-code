#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
	
	int sum = 0;
	printf("%d\n",*(a+2));
	for (int *p = a; p < &a[10]; p++) {
		sum += *p;
	}
	printf("%d\n", sum);

	sum = 0;
	int *p = a;
	while (p < a + 10)
    	sum += *p++;
	printf("%d\n", sum);

    p = a;
	int *q = p+5;
	printf("%d, %d\n", p[2], q[2]);

}

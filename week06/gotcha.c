/* demo of pointers. Uncomment the top lines for an error.
 * 
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>

/* code from the lecture slides */
int main() {
	int *x;
	//*x = 10;
	//printf("%d\n", *x);

	int a;
	printf("Initial a Value: %d\n", a);
	x = &a;
	*x = 10;
	printf("Final a and *x Values: %d %d\n", a, *x);
}

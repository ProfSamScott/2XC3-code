#include <stdio.h>
#include <stdlib.h>

int main() {
	double a[] = {3.14, 2.72, 1.62};
	int b[20] = {[10] = 45, [0] = 12};

	for (int i=0; i<3; i++) 
		printf("%f ", a[i]);
	puts("");

	for (int i=0; i<20; i++)
        printf("%d ", b[i]);
    puts("");
}

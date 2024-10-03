#include <stdio.h>
#include <stdlib.h>

int main() {
	float f1 = 10;
	float f2 = 10.3;
	int i1 = 5000000000;  // warning
	int i2 = 2341.232;
	char c1 = 123;
	char c2 = 888;  	  // warning
	int i3 = 'A';

	printf("floats: %f %f\n", f1, f2);
	printf("ints: %d %d %d\n", i1, i2, i3);
	printf("chars: %c %c\n", c1, c2);

}

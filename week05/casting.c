#include <stdio.h>
#include <stdlib.h>

int main() {
	float f1 = 10;
	float f2 = 10.3;
	int i1 = 5000000000;  // warning: 5000000000 = 1 00101010 00000101 11110010 00000000
	int i2 = 2341.232;
	char c1 = 123;
	char c2 = 888;  	  // warning: 888 = 110 11110000 (x = 120)
	int i3 = 'A';

	printf("floats: %f %f\n", f1, f2);
	printf("ints: %d %d %d\n", i1, i2, i3);
	printf("chars: %c %c\n", c1, c2);

}

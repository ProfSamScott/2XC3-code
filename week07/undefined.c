#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10];
	for (int i=0; i<100; i++) {
		printf("%d ", a[i]);
	}
	puts("");
	
	int i=0, b[10];
	while (i<10)
		a[i] = b[i++];

	for (i=0; i<10; i++) {
        printf("%15d%15d\n", a[i], b[i]);
    }
}


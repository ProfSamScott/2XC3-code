#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv) {
	for (int i=0; i<argc; i++) {
		printf("%s ",argv[i]);
	}
	puts("");
}
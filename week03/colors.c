#include <stdio.h>
#include <stdlib.h>

/*
 * Example of using ANSI Escape Codes to set output color.
 * Note the use of the -e flag to enable escape codes in echo
 *
 * Sam Scott, McMaster University, 2025
 */
int main() {
	// foreground colors only (code 39;49 resets colors back to normal)
	printf("\033[33mHello\033[39;49m, \033[34mWorld!\033[39;49m\n");

	// background colors only 
	printf("\033[43mHello\033[39;49m, \033[44mWorld!\033[39;49m\n");

	// both foreground and background 
	printf("\033[33;40mHello\033[39;49m, \033[34;43mWorld!\033[39;49m\n");

	return EXIT_SUCCESS;
}

/* A program to illustrate some of the concepts from the lecture.
 *
 * Sam Scott, McMaster University, 2025
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int value;

    printf("Enter a value:\n");
    int result = scanf("%d", &value);

    if (result == EOF) {
        fprintf(stderr,"You didn't say anything!\n");
        exit(EXIT_FAILURE);
    } else if (result == 0) {
        fprintf(stderr,"Bad value!\n");
        exit(EXIT_FAILURE);
    }
    printf("Value is %d\n", value);
    exit(EXIT_SUCCESS);

} 


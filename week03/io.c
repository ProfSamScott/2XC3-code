/* This is the code I wrote in Lecture 3
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int value;
    char *s = "my string";
    char s2[1000];

    value = 5;

    puts("enter a number");
    int result = scanf("%d", &value);

    if (result == 0) {
        fprintf(stderr, "Bad value\n");
        exit(EXIT_FAILURE);
    } else if (result == EOF) {
        puts("we're done");
        exit(EXIT_SUCCESS);
    }

    puts("say a word");
    scanf("%s", s2);

    puts("Hello, World!");

    printf("The value is %d.\n", value);
    printf("the string is %s.\n", s2);
}

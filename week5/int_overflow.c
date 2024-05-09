/* Example of int overflow, even though the result of the computation should be 
 * within range.
 *
 * Try 50 000 000, then 500 000 000.
 * 
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // contains integer limit constants

int main(void) {
    int mph, kph;

    printf("Max int = %d\n\n", INT_MAX);

    printf("Enter kilmeters per hour (int): ");
    scanf("%d", &kph);

    mph = kph * 5 / 8;            // oops!
    //mph = (int)(kph * (5.0/8.0)); // A better way to do it

    printf("%d kph = %d mph\n", kph, mph);

    return EXIT_SUCCESS;
}

/* Run on your machine to find out your limits and see overflow examples.
 *
 * You will get a warning from the compiler about integer overflow, but 
 * the program will still run.
 * 
 * Note that floating point limits are about both magnitude and precision.
 * Floating point types have a smallest and largest representable 
 * non-zero magnitude (positive or negative).
 * 
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // integer limit constants

int main(void) {
    printf("char:                   %2ld bytes, %20d to %20d\n",sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short int:              %2ld bytes, %20d to %20d\n",sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned short int:     %2ld bytes, %20d to %20u\n",sizeof(unsigned short int), 0, USHRT_MAX);
    printf("int:                    %2ld bytes, %20d to %20d\n",sizeof( int), INT_MIN, INT_MAX);
    printf("unsigned int:           %2ld bytes, %20d to %20u\n",sizeof(unsigned int), 0, UINT_MAX);
    printf("long int:               %2ld bytes, %20ld to %20ld\n",sizeof(long int), LONG_MIN, LONG_MAX);
    printf("unsigned long int:      %2ld bytes, %20d to %20lu\n",sizeof(unsigned long int), 0, ULONG_MAX);
    printf("long long int:          %2ld bytes, %20lld to %20lld\n",sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int: %2ld bytes, %20d to %20llu\n",sizeof(long long int), 0, ULLONG_MAX);

    printf("\nCharacters as integers: %d %d %d\n",'A', 'A' + 10, 'A' * 'Z');

    int x = 3.4;
    double y = 12;
    char z = 65;

    printf("\nimplicit typecasting: x = %d, y = %f, z = %c\n",x, y, z);

    printf("\nInteger Overflow INT_MAX + 1 = %d\n",INT_MAX+1);
    printf("Integer Overflow INT_MIN - 1 = %d\n",INT_MIN-1);

    return EXIT_SUCCESS;
}

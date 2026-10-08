#include <stdio.h>
#include <stdlib.h>

// standard use: define a constant
#define PI 3.14159

// less standard use: define a string substitution
#define AREA1 PI*radius*radius

// parameterized macro
#define AREA2(rad) PI*rad*rad

/* Makes use of PI */
float circleArea(float radius) {
    return 2 * PI * radius;
}

/* Makes use of AREA1 and AREA2 */
int main() {
    float radius = 10.0;
    float radius2 = 20.0;

    printf("%f\n", circleArea(radius));
    printf("%f\n", AREA1);
    printf("%f\n", AREA2(radius));
    printf("%f\n", AREA2(radius2));

    return EXIT_SUCCESS;
}

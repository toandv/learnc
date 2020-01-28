#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    float fahr, celsius;

    // C = (5 / 9) * (F - 32)
    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = 5.0 / 9.0 * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += STEP;
    }
}
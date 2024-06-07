#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// print Fahrenheit -> Celcius table.

// in terminal run cc <filename>.c which will generate an a.out file. you can then run this in terminal for output

int main() {
    printf("Fahrenheit to Celcius!\n");
    printf("F: \t C:\n");

    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr -32));
    }
}
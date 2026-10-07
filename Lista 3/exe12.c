#include <stdio.h>

int main() {
    int c;
    double f, k;

    printf("Celsius\tFahrenheit\tKelvin\n");
    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("%d\t%.2f\t\t%.2f\n", c, f, k);
    }
    return 0;
}
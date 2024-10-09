#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // For fabs()

void f_print(float y[], int size);
float calculating_y(float y[], int *k, float x);

int main() {
    float x, e = 0;
    float y[15];
    int k = -1;

    //input
    printf("Enter x: ");
    scanf("%f", &x);
    do {
        printf("Enter e: ");
        scanf("%f", &e);
    } while (e <= 0 || e >= 1);

    //calculation
    do {
        k++;
        y[k] = calculating_y(y, &k, x);
    } while (k < 14 && fabs(y[k] - y[k-1]) >= e);
    
    f_print(y, k);

    return 0;
}

// Function to calculate each y[k]
float calculating_y(float y[], int *k, float x) {
    if (*k == 0) {
        return 1.0;
    } else if (*k == 1) {
        return x;
    } else if (*k == 2) {
        return 5.0 / 8.0;  // Perform floating-point division
    } else {
        return (y[*k - 2] / 2.0) + (3.0 * y[*k - 3] / 4.0);
    }
}

// Function to print the array
void f_print(float y[], int size) {
    for (int i = 0; i <= size; i++) {
        printf("%d. %f\n", i + 1, y[i]);
    }
}

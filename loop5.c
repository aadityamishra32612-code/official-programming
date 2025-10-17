#include <stdio.h>

int main() {
    int L = 20;
    int i, j, k, l;
    int num1, num2;

    for (i = 1; i <= L; i++) {
        for (j = i + 1; j <= L; j++) {
            num1 = i*i*i + j*j*j;
            for (k = 1; k <= L; k++) {
                for (l = k + 1; l <= L; l++) {
                    num2 = k*k*k + l*l*l;
                    if (num1 == num2 && i != k && i != l && j != k && j != l) {
                        printf("%d can be expressed as %d^3 + %d^3 and %d^3 + %d^3\n", num1, i, j, k, l);
                    }
                }
            }
        }
    }
    return 0;
}

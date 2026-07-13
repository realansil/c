// Polynomial addition in C
#include <stdio.h>

int main() {
    int P[3] = {5, 4, 3};
    int Q[3] = {3, 2, 1};
    int R[3];
    int i;

    for (i = 0; i < 3; i++) {
        R[i] = P[i] + Q[i];
    }

    printf("Result polynomial:\n");
    printf("%dx^2 + %dx + %d\n", R[0], R[1], R[2]);

    return 0;
}
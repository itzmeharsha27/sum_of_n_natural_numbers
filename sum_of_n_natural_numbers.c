#include <stdio.h>

int main() {
    int n, sum_loop = 0, sum_formula;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop method
    for(int i = 1; i <= n; i++) {
        sum_loop += i;
    }

    // Formula method
    sum_formula = n * (n + 1) / 2;

    printf("Sum using loop = %d\n", sum_loop);
    printf("Sum using formula = %d\n", sum_formula);

    return 0;
}

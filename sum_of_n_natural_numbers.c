#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Calculate sum using loop
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

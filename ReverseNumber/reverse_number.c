#include <stdio.h>

int main() {
    int n, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    printf("Reverse of %d = %d\n", n, rev);
    return 0;
}
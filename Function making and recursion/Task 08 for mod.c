// task 08
#include <stdio.h>

int modulo(int n, int m) {
    // Base case: If n is less than m, then n is the modulus result
    if (n < m)
        return n;

    // Recursive case: Subtract m from n until n is less than m
    return modulo(n - m, m);
}

int main() {
    int n, m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);

    int result = modulo(n, m);
    printf("n mod m = %d\n", result);

    return 0;
}

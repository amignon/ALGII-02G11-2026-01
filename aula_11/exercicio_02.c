#include <stdio.h>

long fib(int n) {
    if (n < 2)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Número: ");
    scanf("%d", &n);
    long f;
    for (int i = 0; i <= n; i++) {
        f = fib(i);
        printf("%ld ", f);
    }
    return 0;
}
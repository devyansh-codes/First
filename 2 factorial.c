#include <stdio.h>
int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));
    return 0;
}
----------------------------------------------------------------------------------------------------
#include<stdio.h>
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", factorial(n));
    return 0;
}

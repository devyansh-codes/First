#include<stdio.h>
void Value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside call by value: %d %d\n", x, y);
}
void Reference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: %d %d\n", a, b);
    Value(a, b);
    printf("After call by value: %d %d\n", a, b);
    Reference(&a, &b);
    printf("After call by reference: %d %d\n", a, b);
    return 0;
}

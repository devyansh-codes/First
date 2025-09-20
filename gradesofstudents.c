#include <stdio.h>
int main() {
    int a, b;
    printf("Enter student marks: ");
    scanf("%d", &a);
    if (a >= 90) {
        b = 1;
    } else if (a >= 80 && a <= 89) {
        b = 2;
    } else if (a >= 70 && a <= 79) {
        b = 3;
    } else if (a >= 60 && a <= 69) {
        b = 4;
    } else {
        b = 5;
    }
    switch (b) {
        case 1: printf("A"); break;
        case 2: printf("B"); break;
        case 3: printf("C"); break;
        case 4: printf("D"); break;
        case 5: printf("FAIL"); break;
        default: printf("Error");
    }
}

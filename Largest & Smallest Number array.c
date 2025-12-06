#include<stdio.h>
int main() {
    int arr[100], n, i;
    int max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);
    return 0;
}

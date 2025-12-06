#include<stdio.h>
#include<string.h>
int Palindrome(char s[]) {
    int i = 0, j = strlen(s) - 1;
    while(i < j) {
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if(Palindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

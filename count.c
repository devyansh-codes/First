#include<stdio.h>
int main() {
    char text[500];
    int i, chars = 0, words = 1;
    printf("Enter text: ");
    gets(text);
    for(i = 0; text[i] != '\0'; i++) {
        chars++;
        if(text[i] == ' ')
            words++;
    }
    printf("Words = %d\nCharacters = %d\n", words, chars);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
char changeCase(char c);
int main(void) {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    char result = changeCase(input);
    printf("The case-changed character is: %c\n", result);

    return 0;
}
char changeCase(char c) {
    
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); 
    }
    
    else if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); 
    }
    return c;
}


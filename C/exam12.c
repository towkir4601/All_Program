#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    int i, len;

    printf("Enter a Name: ");
    fgets(ch, sizeof(ch), stdin);

    len = strlen(ch);

    // Remove newline if exists
    if(ch[len - 1] == '\n'){
        ch[len - 1] = '\0';
        len--;
    }

    printf("Reverse is: ");

    for(i = len - 1; i >= 0; i--){
        printf("%c", ch[i]);
    }

    printf("\n");

    return 0;
}

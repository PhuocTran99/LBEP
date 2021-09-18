#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char text[100];
    printf(">> Moi nhap van ban:\n");
    gets(text);
    for (int i = 0; i < strlen(text); i++) {
        switch (text[i]) {
            case 'u':
            case 'e':
            case 'o':
            case 'a':
            case 'i':
            case 'U':
            case 'E':
            case 'O':
            case 'A':
            case 'I':
                count++;
                break;
            default:
                break;
        }
    }
    printf("So nguyen am la %d", count);
}

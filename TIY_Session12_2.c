#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char word[100];
    printf(">> Moi nhap mot tu: ");
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++) {
        switch (word[i]) {
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
    printf("So nguyen am la %d\n", count);
    printf("So phu am la %d", strlen(word)-count);
}

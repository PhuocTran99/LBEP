#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf(">> Nhap ten: ");
    gets(name);
    printf(">> Nhap tuoi: ");
    scanf("%d", &age);
    for (int i = 1; i <= age; i++) printf("%s\n", name);
}

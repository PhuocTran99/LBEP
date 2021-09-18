#include <stdio.h>

int main() {
    int n;
    printf(">> Nhap n = ");
    scanf("%d", &n);
    printf("Bang cuu chuong %d:\n", n);
    for (int i = 1; i <= 10; i++) printf("%d  x %2d = %2d\n", n, i, n*i);
}

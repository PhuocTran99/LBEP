#include <stdio.h>

int main() {
    int n, f = 1, f0 = 0, f1 = 1;
    printf(">> Nhap n = ");
    scanf("%d", &n);
    printf("Day so Fibonacci co %d phan tu la:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", f);
        f = f0+f1;
        f0 = f1;
        f1 = f;
    }
}

#include <stdio.h>

int main() {
    int n;
    printf(">> Nhap n = ");
    scanf("%d", &n);
    //cau a
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) printf("%d ",j);
        printf("\n");
    }
    printf("\n");
    //cau b
    for (int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) printf("%d ",j);
        printf("\n");
    }
}

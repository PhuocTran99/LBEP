#include <stdio.h>

int main() {
    int n;
    printf(">> Moi nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n], temp;
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Array before reverse:\t");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    for (int i = 0, j = n-1; i < n/2; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("\nArray after reverse:\t");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}

#include <stdio.h>

int main() {
    int n;
    printf(">> Moi nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Array:\t");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++) {
        max = (a[i] > max)?a[i]:max;
        min = (a[i] < min)?a[i]:min;
    }
    printf("\nMax = %d\n", max);
    printf("Min = %d", min);
}

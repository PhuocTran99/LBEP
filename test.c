#include <stdio.h>
#include <math.h>

int main() {
       int n, checkSNT = 0;
       printf("Nhap so n: ");
       scanf("%d", &n);
       if (n <= 1) printf("Day khong phai la SNT");
       else {
              for (int i = 2; i <= sqrt(n); i++) {
                     if (n%i == 0) {
                            printf("Day khong phai la SNT");
                            checkSNT = 1;
                            break;
                     }
              }
              if (!checkSNT) printf("Day la SNT");
       }
}
#include <stdio.h>

int main() {
    int n = 100;
    while (n != 5) {
        printf("%d ,", n);
        n-=5;
    }
    printf(" %d.", 5);
}

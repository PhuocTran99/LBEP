#include <stdio.h>
#include <string.h>

int main() {
	char str[100], *p = str, temp;
	printf(">> Enter a string: ");
	gets(str);
	int n = strlen(str);
	for (int i = 0, j = n-1; i <= n/2-1; i++, j--) {
		temp = *(p+i);
		*(p+i) = *(p+j);
		*(p+j) = temp; 
	}
	printf("Reversed string is: %s", str);
}

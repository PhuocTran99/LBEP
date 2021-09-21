#include <stdio.h>
#include <string.h>

int main() {
	int isPalindrome = 1;
	char str[100], *p = str;
	printf(">> Moi nhap 1 chuoi: ");
	gets(str);
	int n = strlen(str);
	for (int i = 0, j = n-1; i <= n/2-1; i++, j--) {
		if (*(p+i) != *(p+j)) {
			isPalindrome = 0;
			break;
		} 
	}
	if (isPalindrome) printf("Day la chuoi Palindrome!");
	else printf("Day khong phai la chuoi Palindrome!");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *animal = (char*) malloc(100*sizeof(char));
	char *bird = (char*) malloc(100*sizeof(char));

	//input
	int checkInput;
	do {
		checkInput = 1;
		printf("Enter name of an animal: ");
		gets(animal);
		for (int i = 0; i < strlen(animal); i++) {
			if ((*(animal+i)>=65 && *(animal+i)<=90) || (*(animal+i)>=97 && *(animal+i)<=122)) continue;
			else {
				printf("Please enter correctly!\n");
				checkInput = 0;
				break;
			}
		}
	} while(!checkInput);
	do {
		checkInput = 1;
		printf("Enter name of a bird: ");
		gets(bird);
		for (int i = 0; i < strlen(bird); i++) {
			if ((*(bird+i)>=65 && *(bird+i)<=90) || (*(bird+i)>=97 && *(bird+i)<=122)) continue;
			else {
				printf("Please enter correctly!\n");
				checkInput = 0;
				break;
			}
		}
	} while(!checkInput);

	//process
	int x = strlen(animal), y = strlen(bird), a[2] = {x, y};
	char *p = animal;
	for (int i = 0; i < 2; i++) {
		if ((*(p+a[i]-2) == 's' || *(p+a[i]-2) == 'S' || *(p+a[i]-2) == 'c' || *(p+a[i]-2) == 'C') && (*(p+a[i]-1) == 'h' || *(p+a[i]-1) == 'H')) {
			*(p+a[i]) = 'e';
			*(p+a[i]+1) = 's';
			*(p+a[i]+2) = '\0';
		} else {
			switch (*(p+a[i]-1)) {
				case 's':
				case 'x':
				case 'z':
				case 'S':
				case 'X':
				case 'Z':
					*(p+a[i]) = 'e';
					*(p+a[i]+1) = 's';
					*(p+a[i]+2) = '\0';
					break;
				case 'y':
				case 'Y':
					*(p+a[i]-1) = 'i';
					*(p+a[i]) = 'e';
					*(p+a[i]+1) = 's';
					*(p+a[i]+2) = '\0';
					break;
				case 'f':
				case 'F':
					*(p+a[i]-1) = 'v';
					*(p+a[i]) = 'e';
					*(p+a[i]+1) = 's';
					*(p+a[i]+2) = '\0';
					break;
				default:
					*(p+a[i]) = 's';
					*(p+a[i]+1) = '\0';
					break;
			}
		}
		p = bird;
	}
	
	//output
	printf("Names in plural of both are %s and %s", animal, bird);

	free(animal);
	free(bird);
}

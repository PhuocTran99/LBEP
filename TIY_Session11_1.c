#include <stdio.h>
#include <string.h>

int main() {
    char name[7][100] = {"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
    char temp[100];
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 7; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for (int i = 0; i < 7; i++) printf("%s\n", name[i]);
}

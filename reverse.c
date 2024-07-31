#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    int length, i;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);
    char reversed[50];
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
    printf("Reversed string: %s\n", reversed);
     return 0;
}

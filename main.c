#include <stdio.h>
#include <string.h>

void reverse_string(char *str);
void to_uppercase(char *str);

int main() {
    char text[] = "Hello World";
    to_uppercase(text);
    //this funct reverse a given string
    reverse_string(text);
    printf("String Reverse Tool\n");
    return 0;
}


void reverse_string(char *str) {
    if (str == NULL) return;
    int len = strlen(str);
    for(int i = 0;i<len/2;i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}


void to_uppercase(char *str) {
    if (str == NULL) return;
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

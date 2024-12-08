#include <stdio.h>
int main(){
    char s1[50] = "Function";
    char s2[] = "Array";

    int i = 0, j = 0;
    int result = 0;


    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] != s2[j]) {
            result = s1[i] - s2[j];
        }
        i++;
        j++;
    }


    if (result == 0) {
        result = s1[i] - s2[j];
    }


    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is  small.\n");
    } else {
        printf("The first string  is big.\n");
    }

    return 0;
}

#include <stdio.h>
int main()

{
     int num = 5;
    int *ptr = &num;
    printf("%d\n", num);
    printf("%d\n", *ptr);
    printf("%d\n",&num);
    printf("%d\n",ptr);

    return 0;
}

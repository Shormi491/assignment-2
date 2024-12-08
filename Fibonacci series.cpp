#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int f0 = 0, f1 = 1, f2 = f0 + f1;

    printf("%d %d %d ", f0, f1, f2);

    for (int i = 3; i < n; i++)
    {
        f0 = f1;
        f1 = f2;
        f2 = f0 + f1;
        printf("%d ", f2);
    }

    return 0;
}

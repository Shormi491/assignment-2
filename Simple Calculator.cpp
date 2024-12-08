#include<stdio.h>
int main()
{
    char ch;

    int a=5,b=6;

    scanf("%c",&ch);
    switch(ch)
    {
    case'+':
        printf("%d\n",a+b);
        break;

    case'-':
        printf("%d\n",a-b);
        break;
    case'*':
        printf("%d\n",a*b);
        break;

      case'/':
        printf("%d\n",a/b);
        break;
      default:
        printf("Invalid operation\n");
        break;
    }


    return 0;



}

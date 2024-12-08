#include<stdio.h>
#include<string.h>

int main()
{
    char str1[40]="Hello ";
    char str2[]="world";
    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf(" %s\n",str1);
    return 0;

}

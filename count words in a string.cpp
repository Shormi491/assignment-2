#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int i,word=1;
   gets(a);
   i=0;
   while(a[i] !='\0')
   {
       if(a[i]== ' ')
        word++;
        i++;
   }
   printf("%d",word);
   return 0;


}

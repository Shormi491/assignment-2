#include<stdio.h>
int main()
{
    int X=5,Y=6,temp;
    int *ptr1,*ptr2;

      ptr1=&X;
      ptr2=&Y;

   temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;

   printf("%d\n",X);
   printf("%d\n",Y);

   return 0;

}

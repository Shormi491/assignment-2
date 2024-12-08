#include<stdio.h>
int main()
{
    int x[100],size,i,max;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    max=x[0];

    for(i=0;i<size;i++)

    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    printf("%d",max);




    return 0;



}

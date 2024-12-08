#include<stdio.h>
void print1toN(int n){
{
    if(n<1)return;
            print1toN(n-1);
    }
    printf("%d",n);


}
int main()
{
    int n;
    scanf("%d",&n);
    print1toN(n);
    return 0;

}

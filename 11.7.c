#include<stdio.h>
void fibc(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fibc(n);
}
void fibc(int a)
{
    int i,x=-1,y=1,z=0;
    for(i=1;i<=a;i++)
    {
       z=x+y;
       printf("%d ",z);
       x=y;
       y=z;
    }
}
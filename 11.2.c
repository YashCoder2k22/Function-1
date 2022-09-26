#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,s;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=hcf(x,y);
    printf("Hcf is %d",s);
    return 0;
}
int hcf(int a,int b)
{
    int i,min;
    min=a<b?a:b;
    for(i=min;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return i;
        }
    }
}
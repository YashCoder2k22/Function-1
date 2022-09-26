#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y,s;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=lcm(x,y);
    printf("Lcm is %d",s);
    return 0;
}
int lcm(int a,int b)
{
    int i,max;
    max=a>b?a:b;
    for(i=max;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return i;
        }
    }
}
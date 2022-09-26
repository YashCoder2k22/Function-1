#include<stdio.h>
int fact(int);
int seriesfact(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("%d",seriesfact(n));
    return 0;
}
int fact(int a)
{
    int i,sum=1;
    for(i=1;i<=a;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int seriesfact(int b)
{
    int s=0,j;
    for(j=1;j<=b;j++)
    {
    s=s+(fact(j)/j);
    }
    return s;
}
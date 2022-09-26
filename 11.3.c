#include<stdio.h>
int prime(int);
int main()
{
    int n,s;
    printf("Enter a number");
    scanf("%d",&n);
    s=prime(n);
    if(s==2)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
    return 0;

}
int prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    return count;
}
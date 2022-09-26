#include<stdio.h>
int nextprime(int);
int main()
{
    int n,s;
    printf("Enter a number");
    scanf("%d",&n);
    s=nextprime(n);
    printf("Next prime number is %d",s);
    return 0;
}
int nextprime(int a)
{
    int i,count;
    while(a)
    {
        a++;
        count=0;        
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            return a;
        }
    }
}
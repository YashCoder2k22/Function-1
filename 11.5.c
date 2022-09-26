#include<stdio.h>
void Nprime(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    Nprime(n);
    return 0;
}
void Nprime(int a)
{
    int i,j,count;
    for(i=2;i<=a;i++)
    {
        count=0;
        for(j=1;j<=a;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
}



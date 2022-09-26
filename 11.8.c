#include<stdio.h>
int fact(int);
int comb(int,int);
void pascal(int);
int main()
{
    int x,u,v,s;
    printf("Enter a number for pascal triangle");
    scanf("%d",&x);
    pascal(x);
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
int comb(int n,int r)
{
    int sum;
    sum=fact(n)/(fact(n-r)*fact(r));
    return sum;
}
void pascal(int n)
{
    int i,j,r,k;
    for(i=1;i<=n;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
                printf("%d  ",comb(i-1,r));
                k=0;
                r++;
            }
            else
            {
                printf("   ");
                k=1;
            }
        }
        printf("\n");
    }
}
    
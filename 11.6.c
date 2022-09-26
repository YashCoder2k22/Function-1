#include<stdio.h>
void btwprime(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d",&x,&y);
    btwprime(x,y);
    return 0;
}
void btwprime(int a,int b)
{
    int i,j,min,max,count;
    min=a<b?a:b;
    max=a>b?a:b;
    for(i=min;i>=min&&i<=max;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
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
#include<stdio.h>
int square(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Square is %d",square(n));
    return 0;
}
int square(int a)
{
    int sum;
    return sum=a*a;
}
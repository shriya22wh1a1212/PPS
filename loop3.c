#include<stdio.h>
int main()
{
int n,sum;
printf("give value of n");
scanf("%d",n);
int sum=0;
while(n!=0)
{
rem=n%10;
sum=sum+rem;
}
printf("\n sum=%d",sum);
return 0;
}

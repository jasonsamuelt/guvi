#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
long long int sum;
sum =0;
printf("Enter number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
sum = sum+i;
}
printf("sum of n is %ld",sum);
getch();
return 0;
}
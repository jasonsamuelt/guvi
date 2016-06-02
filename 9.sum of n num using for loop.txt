#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the last number");
scanf("%d",&n);
n=n*(n+1)/2;
printf("their sum is %d",n);
getch();
return(0);
}
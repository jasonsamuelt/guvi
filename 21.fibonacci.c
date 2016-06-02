#include<stdio.h>
#include<conio.h>
int main()
{
int n=1,j=0,i,k=1;
printf("Enter the last digit");
scanf("%d",&i);
printf("Fibonacci series is\n");
while(k+j<i)
{
k=n+j;
j=n;
n=k;
printf("%d\n",k);
}
getch();
return 0;
}
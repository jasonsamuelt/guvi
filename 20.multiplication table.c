#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("Enter num");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
getch();
return 0;
}

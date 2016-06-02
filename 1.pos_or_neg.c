#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
printf("Enter the number to check");
scanf("%d",&i);
i==0?printf("number is zero"):i>0?printf("number is pos"):printf("number is negative");
getch();
return(0);
}
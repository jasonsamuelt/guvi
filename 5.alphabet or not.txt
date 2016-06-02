#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("Enter the character");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch<='A'&&ch>='Z'))
{
printf("the character is alphabet");
}
else
{
printf("It is not a alphabet");
}
getch();
return(0);
}
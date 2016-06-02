#include<stdio.h>
#include<conio.h>
int main()
{
char a[100],b[100];
int c,d,e;
printf("Enter string");
gets(a);
c = strlen(a);
for(d=c-1,e=0;d>=0;e++,d--)
{
b[e]=a[d];
}
printf("reversed string is %s",b);
getch();
return 0;
}
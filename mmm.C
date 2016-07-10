#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,count=0;
clrscr();
printf("\n enter the number of students:");
scanf("%d",&a);
b=2*a;
for(i=0;i<b;i++)
{
for(j=i+1;j<=b;j++)
{
printf("\n%d\t%d\n",i,j);
count++;
} }
printf("the daily walk combination is %d",count);
getch();
}

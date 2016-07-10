#include<stdio.h>
#include<conio.h>
void main()
{
int m,y,q,i,j=1;
clrscr();
printf("Enter the m value:");
scanf("%d",&m);
printf("Enter the pair:");
scanf("%d",&q);
for(i=0;i<2*m;i++)
{
y=2*m-i;
if(q!=y)
{
printf("The pair is%d for days %d is %d\n",q,j++,q);
}
}
getch();
}

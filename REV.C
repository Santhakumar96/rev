#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0,m;
	clrscr();
	printf("enter the no.");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		r=r*10+m;
		n=n/10;
	}
	printf("%d",r);
	getch();
}
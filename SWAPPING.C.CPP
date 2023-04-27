#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float a,b,c;

	printf("the first number=");
	scanf("%f",&a);
	printf("\nthe second number=");
	scanf("%f",&b);

	c=a;
	a=b;
	b=c;

	printf("\nafter swapping,first number=%f",a);
	printf("\nafter swapping,second number=%f",b);
	getch();
}

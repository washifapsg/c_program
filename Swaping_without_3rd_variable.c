#include<stdio.h>
void main()
{
	int x,y;
	printf("enter x value");
	scanf("%d",&x);
	printf("enter y value");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Swaped values are\nx=%d\ny=%d",x,y);
}

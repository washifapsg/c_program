#include <stdio.h>
int rev(int n)
{
	int rev_n=0;
	while(n>0)
	{
		rev_n=rev_n*10+n%10;
		n=n/10;
	}
	return rev_n;
}
int main()
{
	int x,y;
	printf("enter a value to check palindrome\n");
	scanf("%d",&x);
	y=rev(x);
	if(x==y)
	{
		printf("given value is palindrome");
	}
	else
	{
		printf("given value is not palindrome");
	}
}

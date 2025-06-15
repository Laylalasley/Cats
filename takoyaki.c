#include<stdio.h>
void main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	if(n%2 == 0)
{
	printf(" your number %d is even",n);
	}	
	else
	{
		printf("your number %d is odd",n);
	}
	getch();
}

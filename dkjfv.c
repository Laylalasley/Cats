#include<stdio.h>
int main()
{
	int i,a[5];
	printf("enter the user of array");
	for(i=0;i<5;i++)
	{
		printf("enter the number %d",i+1);
		scanf("%d",&a[i]);
	}
	printf("The number you enter are ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}

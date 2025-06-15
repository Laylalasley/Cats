#include<stdio.h>
int main()
{
	int a[10],i,g;
	printf("Enter any 10 number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	{
		g=a[0];
		for(i=0;i<10;i++)
	if(g>a[i])
	{
		g=a[i];
	
	}
}
	printf("Greatest number is %d\n",g);
	return 0;
}

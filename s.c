#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	for(num=1;num!=20;num++)
	{
		if(num==8)
		{
			continue;
		}
		printf("%d",num);
	}
	getch();
}

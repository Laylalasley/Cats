#include <stdio.h>
#include <conio.h>
int main()
{
	int ch;
	FILE*fp;
	fp=fopen("file 1.txt","w");
	putw(65,fp);
	fclose(fp);
	fp=fopen("file 1.txt","r");
	ch=getw(fp);
	printf("%d",ch);
	fclose(fp);
}

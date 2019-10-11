#include<stdio.h>
#include<conio.h>
//#include<string.h>

void main()
{
	char str[10];
	int len,i;
	clrscr();
	printf("Enter the  string: ");
	gets(str);
	len=strlen(str);
	printf("Reversed string: ");
	for(i=len-1;i>=0;i--)
		printf("%c",str[i]);
	getch();
}
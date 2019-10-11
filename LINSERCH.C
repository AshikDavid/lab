#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],ser,i,n;
	clrscr();
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to search: ");
	scanf("%d",&ser);
	for(i=0;i<n;i++)
		if(a[i]==ser)
		{
			printf("%d found at index %d ",ser,i+1);
			break;
		}
	if(n==i)
		printf("Element not found");
	getch();
}
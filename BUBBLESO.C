#include<stdio.h>
#include<conio.h>
void main()
{
	int  a[10],n,i,j;
	clrscr();
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Sorted array: ");
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(i=0;i<n;i++)
		printf("  %d",a[i]);
	getch();
}
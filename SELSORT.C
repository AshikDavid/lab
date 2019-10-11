#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],n,i,j,temp;
	clrscr();
	printf("Enter the array size required: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	printf("Sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,j,n,temp;
	clrscr();
	printf("\t\tINSERTION SORT\n\n");
	printf("Enter the limit: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\n\n!!!!!!!!!!Invalid limit!!!!!!!!!!!!");
		getch();
		exit();
	}
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("Sorted list: ");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
	getch();
}
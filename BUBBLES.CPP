#include<iostream.h>
#include<conio.h>
void main()
{
	int  a[10],n,i,j;
	clrscr();
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Sorted array: ";
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(i=0;i<n;i++)
		cout<<" "<<a[i];
	getch();
}
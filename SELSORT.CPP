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
		for(j=i+1;j<n;j++)
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
	getch();
}




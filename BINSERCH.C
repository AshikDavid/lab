       #include<stdio.h>
       #include<conio.h>
       void main()
       {
		int a[10],ser,n,i,j,mid,lb,ub;
		clrscr();
		printf("Enter the size of array: ");
		scanf("%d",&n);
		printf("Enter the array: ");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(i=0;i<n;i++)
			for(j=0;j<n-i;j++)
				if(a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		printf("Enter the element to be searched: ");
		scanf("%d",&ser);
		lb=0;
		ub=n-1;
		while(lb<=ub)
		{       mid=(lb+ub)/2;
			if(ser==a[mid])
			{
				printf("%d Element found at index %d",ser,mid+1);
				break;
			}
			else if(ser>a[mid])
				lb=mid+1;
			else
				ub=mid-1;

		}
		if(lb>ub)
			printf("Key not found");
		getch();
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
}*header;
void creatlist(int num);
void print();
void add_beg(int data1);
void add_end(int data2);
void add_pkey(int data3,int key1);
void del_front();
void del_end();
void del_pkey(int key2);

void initialize()
{
	header=(struct Node*)malloc(sizeof(struct Node));
	header->link=NULL;
	header->data=0;
}
void main()
{
	int num=0,i,n,cho,key,cn=0;
	clrscr();
	initialize();
	do{
	    printf("\nEnter the data: ");
	    scanf("%d",&num);
	    creatlist(num);
	    printf("Do you want to continoue(y/n): ");
	    cn=getch();
	}while(cn=='y'||cn=='Y');
	clrscr();
	print();
	do{
		printf("\n1.Add at beg");
		printf("\n2.Add at end");
		printf("\n3.Add at pirticular pos");
		printf("\n4.Deletion from front");
		printf("\n5.Deletion form end");
		printf("\n6.Deletion from particular key");
		printf("\n7.Exit");
		printf("\nEnter ur choice: ");
		scanf("%d",&cho);
		switch(cho){
			case 1: printf("Enter the no to add: ");
				scanf("%d",&n);
				add_beg(n);
				print();
				break;
			case 2:	printf("Enter the no to add: ");
				scanf("%d",&n);
				clrscr();
				add_end(n);
				print();
				break;
			case 3:	printf("Enter the no to add: ");
				scanf("%d",&n);
				printf("Enter the key: ");
				scanf("%d",&key);
				clrscr();
				add_pkey(n,key);
				print();
				break;
			case 4: clrscr();
				del_front();
				print();
				break;
			case 5: clrscr();
				del_end();
				print();
				break;
			case 6:printf("Enter the key: ");
				scanf("%d",&key);
				printf("\n");
				clrscr();
				del_pkey(key);
				print();
				break;
		}
	}while(cho!=7);
	getch();
}
void creatlist(int num)
{
	struct Node *ptr,*temp;
	ptr=header;
	while(ptr->link!=NULL)
		ptr=ptr->link;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=num;
	temp->link=NULL;
	ptr->link=temp;
}

void print()
{
	struct Node* ptr;
	ptr=header->link;
	printf("List is: ");
	while(ptr!=NULL)
	{
		printf("  %d",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
void add_beg(int data1)
{
	struct Node *ptr,*temp;
	ptr=header;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL)
	{
		printf("\nUnderflow!!");
		exit(0);
	}
	else{
		temp->data=data1;
		temp->link=header->link;
		ptr->link=temp;
	}
}
void add_end(int data2){
	struct Node *ptr,*temp;
	ptr=header;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL)
	{
		printf("\nUnderflow!!");
		exit(0);
	}
	else{
		while(ptr->link!=NULL){
			ptr=ptr->link;
		}
		temp->data=data2;
		temp->link=NULL;
		ptr->link=temp;
	}
}
void add_pkey(int data3,int key1){
	struct Node *ptr,*temp;
	ptr=header;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL)
	{
		printf("\nUnderflow!!");
		exit(0);
	}
	else{
		while((ptr->link!=NULL) && (ptr->data!=key1)){
			ptr=ptr->link;
		}
		if(ptr->data==key1){
			temp->data=data3;
			temp->link=ptr->link;
			ptr->link=temp;
		}
		else
			printf("Key not found \n");
	}
}
void del_front(){
		struct Node *ptr;
		ptr=header->link;
		if(ptr==NULL)
		{
			printf("Underflow!!");
			return;
		}
		header->link=ptr->link;
		free(ptr);
}
void del_end(){
		struct Node *ptr,*ptr1;
		ptr=header;
		if(ptr==NULL)
		{
			printf("Underflow");
			getch();
			exit(0);
		}
		while(ptr->link!=NULL){
			ptr1=ptr;
			ptr=ptr->link;
		}
		ptr1->link=NULL;
		free(ptr);

}
void del_pkey(int key2)
{
       struct Node *ptr,*ptr1;
		ptr=header;
		if(ptr==NULL)
		{
			printf("Underflow");
			getch();
			exit(0);
		}
		while((ptr->link!=NULL)&&(ptr->data!=key2)){
			ptr1=ptr;
			ptr=ptr->link;
		}
		if(ptr->data=key2){
			ptr1->link=ptr->link;
		}
		else{
			printf("Element not found \n");
		}
		if(ptr->link==NULL && ptr->data!=key2){
			printf("List unavailable");
		}
		free(ptr);
}
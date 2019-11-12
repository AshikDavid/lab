#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 100
char stack[100];
int top=-1;
void push(char item)
{
	if(top>=99){
		printf("Stack Overflow!");
	}
	else{
		top+=1;
		stack[top]=item;
	}
}
char pop()
{
	char item;
	item=stack[top];
	top--;
	return(item);
}
int is_operator(char symbol){
if(symbol=='^'||symbol=='*'||symbol=='+'||symbol=='/'||symbol=='-')
	return 1;
else
	return 0;
}

int precedence(char symbol){
	if(symbol=='^')
		return 3;
	else if(symbol=='*'||symbol=='/')
		return 2;
	else if(symbol=='+'||symbol=='-')
		return 1;
	else
		return 0;
}
void main(){
	char infix[size],postfix[size],item,temp;
	int i=0,j=0;
	clrscr();
	printf("Enter the infix expression: ");
	gets(infix);
	strcat(infix,")");
	while(item!='\0')
	{      	item=infix[i];
		if(item=='(')
			push(item);
		else if(isalpha(item))
		{
			postfix[j]=item;
			j++;
		}
		else if(is_operator(item)==1)
		{
			temp=pop();
			while(is_operator(temp)==1&&precedence(temp)>=precedence(item))
			{
				postfix[j]=temp;
				j++;
				temp=pop();
			}
			push(temp);
			push(item);
		}
		else if(item==')')
		{
			temp=pop();
			while(temp!='(')
			{
				postfix[j]=temp;
				j++;
				temp=pop();
			}
		}
		else
		{
			printf("\n Invalid infix expression!");
			getch();
			exit(0);
		}i++;
		//puts(postfix);
		//getch();
	}
		if(top>-1)
		{
			postfix[j]=pop();
			j++;
		}
		postfix[j]='\0';
		printf("Postfix expression:\n");
		puts(postfix);
		getch();
}
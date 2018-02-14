#include<stdio.h>
#include<malloc.h>
#include"head.h"

int IsFull(struct Stack *s)
{
	if((s->top)+1>SIZE-1)
		return 1;
	else
		return 0;
}
int IsEmpty(struct Stack *s)
{
	if (s->top <=-1)
		return 1;
	else
		return 0;
	
}
void Push(struct Stack *s,int ele)
{
	if (!IsFull(s))
	{
		s->arr[++(s->top)] = ele;
		printf("\nElement added successfully..%d\n",s->arr[(s->top)]);
	}
	else
	{
		printf("\nSTACK is full");
	}
	
	
}
int Pop(struct Stack *s)
{
	int poop;
	if (!IsEmpty(s))
	{
		poop = s->arr[(s->top)];
		s->arr[(s->top)] = 0;
		s->top-=1;
		printf("\n%d Element deleted successfully..\n",poop);
		return poop;
	}
	else
	{
		printf("\nSTACK is empty");
		return 0;
	}
	
	
}
void Peek(struct Stack *s)
{
	if (!IsEmpty(s))
	{
		printf("\nPeek element is -> %d",s->arr[(s->top)]);
	}
	else
	{
		printf("\nSTACK is empty");
	}
}


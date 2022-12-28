#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
struct Q_point 
{
	int item;
	struct Q_point*n;
};
struct Q_point*fptr=NULL;
int e_que(void);
void add_item(int);
void rem_item();
void show_item();
void main()
{
	int item,choice,j;
	while(i)
	{
		printf("1.insert\n 2.remove\n 3.dosplay\n 4.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("items to be inserted");
					scanf("%d",&item);
					add_item(item);
					break;
				}
			case 2:
				{
					if(!e_que())
					{
						j=rem_item();
						printf("%d is removed from queue \n",j);
					}
					else
					{
						printf("queue is empty");
					}
				}
			case 3:
				{
					show_item();
					break;
				}
			case 4:
				{
					exit(1);
					break;
				}
			default:
				{
					printf("enter valid choice");
				}
		}
	}
}
int e_que()
{
	if(f_ptr==NUll)
		return true;
	else
		return false;
}
void add_item(int item)
{
	struct q_point*queue=(struct q_point*)malloc(sizeof(struct q_point));	

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node * next;
};
struct node * head=NULL;
struct node * createnode()
{
    struct node * nn = (struct node *) malloc(sizeof(struct node));
    return nn;
}
void insertfirst(int x)
{
struct node *nn = createnode();
    if(head==NULL)
    {
    head = nn;
    nn->data=x;
    nn ->next = NULL;
    }
    else
    {
    nn->data = x;
    nn->next = head;
    head = nn;
    }
    
    
}
void insertlast(int x)
{
	struct node *cn = head;
	struct node *nn = createnode();
	if(head==NULL)
	{
	insertfirst(x);
	}
	else
	{
	nn->data = x;
	nn->next = NULL;
	
	}
while(cn->next)
{
cn = cn->next;
}
cn->next = nn;
}
void insert(int x, int index)
{
struct node *nn = createnode();
struct node *cn = head;
	if(index==1)
	{	
	insertfirst(x);
	}
	else
	{
	int i=1;
	while(i<(index-1))
	{
		cn = cn->next;
		i++;
	}
	nn->data = x;
	nn->next = cn->next;
	cn->next = nn;
	}
}
void print()
{
	struct node * cn = head;
	while(cn)
	{
	printf("%d  ",cn->data);
	cn = cn->next;
	}
	printf("\n");	
}
void delete(int x)
{
	struct node *temp = head;
	struct node *cn = head;
	while(cn->data!=x)
	{
		temp = cn;
		cn = cn->next;
	}
	temp->next = cn->next;
	free(cn);
	cn = NULL;
}
void deleteall()
{
struct node * temp;
struct node * cn = head;
while(cn)
{
temp = cn;
cn = cn->next;
temp->next = NULL;
free(temp);
temp = NULL;
}
}
void deleteFirst()
{
	struct node * temp = head;
	int data = temp->data;
	head = head->next;
}
void reverseNode()
{
	struct node * prev=NULL;
	struct node * nextptr;
	struct node * curr=head;
	while(curr!=NULL)
	{
		nextptr=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextptr;
	}
	head=prev;	
}
void deleteAt(int ind)
{
	struct node * temp;
	struct node * curr=head;
	ind=ind;
	if(ind==1)
	{
		deleteFirst();
		return;
	}
	else
	{
	ind=ind-2;
	while(ind--)
	{
		if(curr->next==NULL)
		{
			return;
		}
		curr=curr->next;
	}
	temp=curr->next;
	curr->next=curr->next->next;
	free(temp);
	}
}
	
int main()
{
 	insertfirst(10);
	insertfirst(20);
	insertlast(40);
	insertlast(50);
	insert(30,2);
	print();
	printf("\n");
	reverseNode();
	// delete(30);
	print();
	deleteFirst();
	printf("\n\n\n");
	// deleteall();
	print();
	int index;
	printf("Enter Index To be deleted");
	scanf("%d",&index);
	deleteAt(index);
	print();
}

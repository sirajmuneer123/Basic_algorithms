/* basic linked list operations. */

#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;

};
void printT(struct node *head);
struct node *insertFirst(struct node *head,int data);
struct node *insertLast(struct node **href,int data);
struct node *newNode(int data);
struct node *insertAfter(struct node **href,int after,int data);
int pop(struct node **href);
main()
{
	struct node *head=NULL;
	head=insertFirst(head,5);
	head=insertFirst(head,6);
	head=insertLast(&head,1);
	head=insertLast(&head,2);
	head=insertLast(&head,3);
	head=insertAfter(&head,2,100);
	printT(head);

}
int pop(struct node **href)
{
	int data=0;
	if(*href==NULL){
		printf("stack is empty.....\n");
		return;
	}/*else if(*(href)->next->next == NULL){
		data=*(href)->data;
		*href=NULL;
	}*/else{
		struct node *current=*href;
		struct node *pre=current;
		while(current->next!=NULL){
			pre=current;
			current=current->next;
		}	
		data=current->data;
//		free(current);
		pre->next=NULL;
	}
	return data;

}
struct node *insertAfter(struct node **href,int after,int data)
{
	if(*href==NULL){
		printf("List is empty...... \n");
	}else{
		struct node *current=*href;
		while(current->data!=after)
			current =current->next;
		struct node *temp=current->next;
		struct node *new=malloc(sizeof(struct node));
		new->data=data;
		current->next=new;
		new->next=temp;
			
	}
	return *href;

}
struct node *insertLast(struct node **href,int data)
{
	if(*href==NULL)
		return newNode(data);
	else{
		struct node *current=*href;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=newNode(data);	
	}
	return *href;

}
struct node *newNode(int data)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	return new;

}
struct node *insertFirst(struct node *head,int data)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=data;
	new->next=head;
	head=new;
	return head;

}
void printT(struct node *head)
{
	while(head!=NULL){
		printf("%d  ",head->data);
		head=head->next;
	
	}
}

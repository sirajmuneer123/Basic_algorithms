/*  linked list node revesel   */
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
void push(struct node **href,int data);
void printList(struct node *head);
void linkedListReverse(struct node **href);
main()
{
	struct node *head=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	linkedListReverse(&head);
	printList(head);
}
void linkedListReverse(struct node **href)
{
	struct node* next;
	struct node* pre=NULL;
	struct node* current=*href;
	while(current!=NULL){
		next=current->next;
		current->next=pre;
		pre=current;
		current=next;
	}
	*href=pre;
}
void printList(struct node *head)
{
	while(head!=NULL){
		printf("%d  ",head->data);
		head=head->next;
	}
		
}
void push(struct node **href,int data)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=data;
	new->next=*href;
	*href=new;

}

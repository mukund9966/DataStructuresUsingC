#include<stdio.h>
#include<stdlib.h>
	struct node{
	int data;
	struct node* next;
};
struct node *head = 0, *temp, *newnode;
	void add(){
		printf("enter the data you want to eneter");
		scanf("%d", &newnode->data);
		newnode->next = head;
		newnode = head;
	}

	void delete(){
		temp = head;
		while(temp->next->next!=NULL){
			temp = temp->next;
		}
		temp->next==NULL;
	}

int main(){
int ch = 1;
while(ch){
		newnode = (struct node*)malloc(sizeof(struct node));


printf("Enter the data you want to enter");
scanf("%d",&newnode->data);
newnode->next = NULL;
if(head==NULL){
	head = temp = newnode;
}
else{
	temp->next = newnode;
	temp = newnode;
}
	printf("Press 1 to Enter more elements\n 0 to stop ");
	scanf("%d",&ch);
}
temp=head;
	while(temp!=NULL){
		printf("%d", temp->data);
		temp = temp->next;
	}

	while(1){
		int c;
		printf("Your chocie");
		scanf("%d",&c);
		switch(ch)
			case 1: add();
			break;
			case 2: delete();
			break;
			default:printf("Write correct chocie");
	}
}








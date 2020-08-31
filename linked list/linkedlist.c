	#include<stdio.h>
	#include<stdlib.h>


	void substart(){

	struct node{
		int data;
		struct node* next;
	};
	struct node *head, *temp;
	temp= head;
	temp = temp->next;
	head = temp;
	}

	void subend(){
		struct node{
		int data;
		struct node* next;
	};
	struct node *head, *temp;
	int i =1;
	while(i<count)
		temp->next = temp;
		i++;
	}
		temp->next = NULL;

		void subbetween(){
			struct node{
		int data;
		struct node* next;
	};
	struct node *head, *temp;
			int pos;
			int i = 1;
			printf("Enter the node you wanty to remove");
			scanf("%d",&pos);
			if(pos>length){
				printf("Not possible");
			}
			else{
				temp = head;
				while(i<pos){
					temp = temp->next;
					i++;
				}
				temp->next = temp->next->next;
			}

		}
	void addstart(){
	struct node{
		int data;
		struct node* next;
	};
	struct node *head, *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	newnode->next = head;
	newnode = head;
	}


	void addend(){
	struct node{
		int data;
		struct node* next;
	};
	struct node *head, *newnode,*temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	temp = head;
	while(temp->next!=0){
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->next = 0;
	}


	void addbetween(){
	struct node{
		int data;
		struct node* next;
	};
	int p;
	int i=1;
	printf("Enter the node after which you want to insert it ");
	scanf("%d",&p);
	if(p>count){
		printf("not possible");
	}
	else{
		struct node *head, *newnode,*temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next = 0;

	temp = head;
	while(i<p){
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	}
	}
	int main(){

		int count,ch;


	struct node{
		int data;
		struct node* next;
	};
	struct node *head, *newnode,*temp, *end;
	int ch =1;
	head=0;
	while(ch){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	if(head==0)
	newnode = head=temp;
	else{
		temp->next=newnode;
		temp=newnode;


	printf("Do you want to continue \n 1 for yes \n 0 for no");
	scanf("%d",&ch);
	}
	temp=head;
	while(temp!=0){
		printf("%d", temp->data);
		temp = temp->next;
		count++;
	}
	end=temp;

	printf("\n");
	printf("Number of nodes are %d", count);
	}

		printf("Enter what you want to do");
		printf("Select options");
		printf("1. inserting at beginning");
		printf("2. inserting at ending");
		printf("3. Inserting at between");
		printf("4. exit");
		printf("\n");
		scanf("%d",&ch);
		while(ch!0){
			switch(ch)
			case 1: addstart();
			break;
			case 2: addend();
			break;
			case 3: addbetween();
			break;
			case 4: substart();
			break;
			case 5: subend();
			break;
			case 6: subbetween();
			break;
			default: printf("write correct condition");
		}
	}



















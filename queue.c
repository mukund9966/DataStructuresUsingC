#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 15
int queue[size];
int front = -1;
int rear = -1;
void enQueue(int v) {
	if(rear ==size-1){
		printf("overflow\n");
	}
	else if(front == -1 && rear ==-1){
		front = rear = 0;
		queue[rear] = v;	}
	else{
		rear++;
		queue[rear]=v;
	}
}
void deQueue(){
	if(front==-1&&rear==-1){
		printf("underflow");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
	    printf("deleted elememt is =");
		printf("%d",queue[front]);
		printf("\n");
		front++;
	}
}

void display()
{
	int i;
	if(front ==-1&&rear==-1){
		printf("empty\n");
	}
	else{
		for(i=front;i<rear+1;i++){
		    printf("queue is :");
			printf("%d",queue[i]);
			printf("\n");
		}
	}
}

int main(){
    display();
	enQueue(3);
	enQueue(5);
		enQueue(-9);
			display();
			deQueue();
			deQueue();
			display();
}
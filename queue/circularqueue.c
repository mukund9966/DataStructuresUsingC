#include<stdio.h>
#include<stdlib.h>
#define size 15
int queue[size];
int front = -1;
int rear = -1;
void enQueue(int v) {
	if((rear+1)%size==front){
		printf("overflow\n");
	}
	else if(front == -1 && rear ==-1){
		front = rear = 0;
		queue[rear] = v;	}
	else{
		rear=((rear+1)%size);
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
		front=(front+1)%size;
	}
}

void display()
{
	int i = front;
	if(front ==-1&&rear==-1){
		printf("empty\n");
	}
	else{
		while(i!=rear)
		{
		    printf("queue is :");
			printf("%d",queue[i]);
			printf("\n");
			i=(i+1)%size;
		}
		printf("%d",queue[rear]);
	}
}

int main(){
    display();
	enQueue(3);
	enQueue(5);
	enQueue(8);
	enQueue(9);
			display();
			deQueue();
			deQueue();
			display();
}
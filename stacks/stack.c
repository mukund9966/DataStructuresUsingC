#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int main() {
	int arr[MAX_SIZE], n=-1, i=0, choice=0;
	printf("Enter the number of values to be entered in stack: ");
	scanf("%d",&n);
	n--;
	printf("Enter the numbers ");
	for(;i<=n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("\n\n\n");
	do {
		printf("\nChoose an Option:\n1. PUSH\n2. POP\n3. DISPLAY\n4. Exit\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1: {
				if(n>=MAX_SIZE-1) {
					printf("Stack Overflow");
					getch();
					system("cls");
				}
				else {
					++n;
					printf("\nEnter Value: ");
					scanf("\n%d",&arr[n]);
					printf("\nInput Taken Successfully");
					getch();
					system("cls");
				}
				break;
			}
			case 2: {
				if(n<0) {
					printf("\nStack Underflow\n");
					getch();
					system("cls");
				}
				else {
					--n;
					printf("\nDeleted Successfully");
					getch();
					system("cls");				
				}
				break;
			}
			case 3: {
				if(n==-1){
					printf("\nStack is Empty!\n");
					getch();
					system("cls");
				}
				else {
					for(i=0;i<=n;i++) {
						printf("%d\t",arr[i]);
					}
					getch();
					system("cls");
				}
				break;
			}
			default: {
				break;
			}
		}
	} while(choice!=4);
	return 0;
}
#include<stdio.h>
int main(){
    
	int arr[10];
	int size,index,element,begin; 
	
	printf("Enter the size of array ");
	scanf("%d",&size);
	
	printf("Enter the elements");
	for (int i = 0; i < size; i++) 
	{
    scanf("%d", &arr[i]);
    }
    printf("Enter the index to delete");
    scanf("%d",&index);
       begin = index;
    while (begin < (size - 1)) {
        arr[begin] = arr[begin + 1];
        begin++;
    }
    for (int i = 0; i < size; i++) {
            printf("%d,",arr[i]);
        
    }
}
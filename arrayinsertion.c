#include<stdio.h>
int main(){
    int size,index,element,begin;
	int arr[20];
	label:
	printf("Enter the size of array ");
	scanf("%d",&size);
	if(size>20){
	    printf("Not possible");
	    goto label;
	}
	
	printf("Enter the elements");
	for (int i = 0; i < size; i++) 
	{
    scanf("%d", &arr[i]);
    }
    printf("Enter the index and element to insert respectively");
    scanf("%d%d",&index, &element);
      begin= (size-1);
    while(begin>size-1){
    arr[begin+1]=arr[begin];
    begin--;
    }
    arr[index]= element;
    for (int i = 0; i < size; i++) {
            printf("%d,",arr[i]);
        
    }
}
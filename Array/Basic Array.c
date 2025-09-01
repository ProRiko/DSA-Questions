#include<stdio.h>
int main(){
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	for (int i = 0; i<size; i++){
		printf("Enter the elements for index %d : ", i);
		scanf("%d", &arr[i]);
	}
	printf("the array is ");
	for (int i = 0; i<size; i++){
		printf("\n%d", arr[i]);
	}
}
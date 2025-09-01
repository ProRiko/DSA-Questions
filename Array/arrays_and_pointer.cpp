#include<stdio.h>
int main(){
	int arr[5] = {2,4,5,1,3};
	int *ptr = arr[5];
	printf("%p\n", arr);
	printf("%d\n", ptr);
	printf("%d", *ptr); //2
}
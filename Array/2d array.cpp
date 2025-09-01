#include<stdio.h>
int main (){
	int arr[2][2];
	for(int i = 0;i<2;i++){
		for(int j = 0; j<2; j++){
			printf("Enter the elements for %d %d ", i,j);
			scanf("%d",&arr[i][j]);
		}	
	}
	printf("the elements are \n");
	for(int i = 0;i<2;i++){
		for(int j = 0; j<2; j++){
			printf("%d",arr[i][j]);
		}	
		printf("\n");
	}
}
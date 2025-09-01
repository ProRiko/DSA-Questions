#include<stdio.h>
int main(){
						//sum of array
//	int arr[3] = {1,2,32};
//	int sum = 0;
//	for (int i = 0; i<3;i++){
//		sum = sum + arr[i];
//	}
//	printf("%d",sum);

						//copy of array
//	int a[3] = {1,2,3};
//	int b[] = {};
//	for(int i = 0; i<3; i++){
//		b[i] = a[i];
//	}
//	printf("copied arr is \n");
//	for(int i = 0; i<3; i++){
//		printf("%d\n", b[i]);
//	}

						//count of duplicate elements
//	int arr[] = {5,4,2,5,2,6,7};
//	int chk[10] = {0};
//	int count = 0;
//	for(int i = 0; i < 7; i++){
//		chk[arr[i]]++;
//	}
//	for(int i = 0; i<10; i++){
//		if(chk[i] > 1){
//			printf("Duplicate number: %d (appears %d times)\n", i, chk[i]);
//            count++;
//		}
//	}
//	printf("%d",count);

						//print unique elements
//	int arr[] = {5,4,2,5,2,6,7};
//	int chk[10] = {0};
//	int count = 0;
//	for(int i = 0; i < 7; i++){
//		chk[arr[i]]++;
//	}
//	for(int i = 0; i<10; i++){
//		if(chk[i] == 1){
//			printf("The unique items are %d \n", i);
//			count++;
//		}
//	}
//	printf("there are %d unique elements",count);

						//merge sorted array
//	int a[3] = {3,5,6};
//	int b[3] = {1,2,4};
//	int c[6];
//	int index = 0;
//	int i=0, j=0,k=0;
//	while (i<3 && j<3){
//		if(a[i]<=b[j]){
//			c[k++] = a[i++];
//		}
//		else{
//			c[k++] = b[j++];
//		}
//	}
//	while(i<3){
//		c[k++] = a[i++];
//	}
//	while(j<3){
//		c[k++] = b[j++];
//	}
//	for(int l = 0; l<6; l++){
//		printf("%d", c[l]);
//	}
							//FREQUENCIES OF ARRAY ELEMENTS	
//	int arr[4] = {5,4,5,6};
//	int chk[10] ={0};
//	int count;
//	for (int i = 0; i <4; i++){
//		chk[arr[i]]++;
//	}
//	for(int k = 0; k<4;k++){
//		count = chk[arr[k]];
//		if(count > 0){
//			printf("The number %d occured %d times \n",arr[k],count);
//			chk[arr[k]] = -1;
//		}
//	}

//	int n = 16;
//	int i;
//	for (i = 1; i<=n; i++){
//		n = n-i;
//	}
//	printf("%d",i-1);
	int N, a, b, prod;
	long long sum = 0;
	scanf("%d", &N);
	if (N <=0){
		a = 0;
		b = 1;
	}
	else if (N >= 9){
		a = 8;
		b = 9;
	}
	else {
		a = N-1;
		b = N+1;
	}
	prod = a*b;
	long long f1 = 0, f2 = 1, next;
	if (prod >= 1) sum += f1;
	if (prod >= 2) sum += f2;
	for (int i = 3; i <= prod; i++){
		next = f1 + f2;
		sum += next;
		f1 = f2;
		f2 = next;
	}
	printf("%lld", sum);
}
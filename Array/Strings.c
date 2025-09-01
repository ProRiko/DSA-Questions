#include<stdio.h>
int main (){
	char a1[20];
	char a2[20];
	//printf("Enter name: ");
	//scanf("%s", a1); //takes only the charecters before the space
	//printf("Your name is %s", a1);
	printf("Enter full name: ");
	gets(a2);
	puts(a2);
	return 0;
}
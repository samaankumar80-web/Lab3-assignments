#include <stdio.h>
int main(){
	int num1;
	int num2;
	
	printf("Enter your 1st number: ");
	scanf("%d",&num1);
	
	getchar();
	printf("Enter your 2nd number: ");
	scanf("%d",&num2);
	
	printf("\nYour 1st number: %d", num1);
	printf("\nYour 2nd number: %d", num2);
}
#include <stdio.h>
int main(){
	int age;
	float height;
	char grade [4];
	
	printf("Enter your age: ");
	scanf("%d", &age );
	
	getchar();
	
	printf("Enter your height: ");
	scanf("%f", &height);
	
	getchar();
	printf("Enter your grade: ");
	fgets(grade, sizeof(grade), stdin);
	

	printf("\nAge: %d\n", age);
	printf("Height: %f\n", height);
	printf("Grade: %s", grade);
	
}
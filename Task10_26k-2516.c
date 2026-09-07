#include <stdio.h>
int main(){
	char Name[100];
	int age;
	float height;
	char grade[5];
	float cgpa;
	
	printf("Enter student name: ");
	fgets(Name,sizeof(Name), stdin);
	
	printf("Enter student age: ");
	scanf("%d",&age);
	
	getchar();
	
	printf("Enter Student height: ");
	scanf("%f",&height);
	
	getchar();
	
	printf("Enter Grade: ");
	fgets(grade, sizeof(grade), stdin);
	
	printf("Enter CGPA: ");
	scanf("%f",&cgpa);
	
	printf("============= STUDENT RECORD =============\n");
	
	printf("Name:\t %s",Name);
	printf("Age:\t  %d", age);
	printf("\nHeight:\t  %.2f", height);
	printf("\nfGrade:\t  %s", grade);
	printf("CGPA:\t  %.2f", cgpa);
	
	
}
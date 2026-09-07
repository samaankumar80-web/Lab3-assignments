#include <stdio.h>
int main(){
	char letter[3];
	
	printf("Enter a character: ");
	fgets(letter, sizeof(letter),stdin);
	printf("You Entered:  %s", letter);

}
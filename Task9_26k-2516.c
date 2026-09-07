# include <stdio.h>
int main(){
	char Product_name[100];
	int quantity;
	float price;
	
	printf("Enter the product name: ");
	fgets(Product_name, sizeof(Product_name), stdin);
	
	printf("Enter quantity: ");
	scanf("%d",&quantity);
	
	getchar();
	
	printf("Enter the price: ");
	scanf("%f",&price);
	
	
	printf("Product Name: %s", Product_name);
	printf("Quantity: %d", quantity);
	printf("\nPrice: %.2f", price);
	
}
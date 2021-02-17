#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	
	int price, gst=0, total=0;
	
	
	
	printf("Billing software for cafe soffee day \n");
	
	printf("\n***********************************\n");
	
	printf("\n Enter the Name of the item : ");
	
	scanf("%s",&a);
	
	printf("\n Enter the price of the item :");
	
	scanf("%d",&price);
	
	gst=((price/100)*18);
	
	total=price*gst;
	
	printf("\n\n Cafe Coffe Day \n\n");
	
	printf("\n***********************************\n");
	
	printf("\n item   price   GST   Total \n");
	
	printf("\n %s    %d    %d    %d \n",a,price,gst,total);
	
	printf("\n***********************************\n");
	
	printf("\n Thank you and Visit Again \n");
	
	getch();
}

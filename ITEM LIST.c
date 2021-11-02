#include<stdio.h>
void main()
{
	int item_code[100],quantity[100],n,i,j;
	float price[100],total_cost[100],net[100],discount[100],total_payable=0;
	printf("Please enter the number of items => ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the item code of item %d ",i+1);
		scanf("%d",&item_code[i]);
		printf("\nEnter the price of item %d ",i+1);
		scanf("%f",&price[i]);
		printf("\nEnter the Quantity of item %d ",i+1);
		scanf("%d",&quantity[i]);
		fflush(stdin);
		total_cost[i]= price[i]*quantity[i];
		if (total_cost[i]>20000)
		{
			discount[i] = (14.0*total_cost[i])/100;
		}
		else if (total_cost[i] >= 10000 && total_cost[i]<=20000)
		{
			discount[i] = (10.0*total_cost[i])/100;
		}
		else 
		{
			discount[i] = 0;
		}
		net[i]= total_cost[i] - discount[i];
		total_payable+=net[i];
	}
	
	system("cls");
	
	printf("\nItem Code  Price   Quantity   Total Cost   Discount  		Net\n");
	for (i=0;i<n;i++)
	{
			printf(" %d	  %4.2f    %3d     	%5.2f 	%.2f		%.2f\n",item_code[i],	price[i],	 quantity[i],	 total_cost[i],		discount[i],	net[i]);
	}
	
	printf("\nThe total amount payable is %.2f.",total_payable);
}

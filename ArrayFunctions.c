//Jaber Awed
//arrays with function

#include <stdio.h>

void loadArray(float []);
void displayArray(float []);

int main()
{
	
	float prices [4];
	loadArray(prices);
	displayArray(prices);



}

void loadArray(float prices[])
	{
		int i;
	for(i=0; i<4; ++i)
	
	{
		
		
	printf("Enter a price");
	scanf("%f", &prices[i]);
	}
	
	}	
void displayArray(float prices[])
	{
		int i;
		for(i=0; i<4; ++i)
		printf("\n %.2f", prices[i]);
	}


	

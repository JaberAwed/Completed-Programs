//Jaber Awed
//arrays and pointers

#include <stdio.h>


void loadArray(float *);
void printArray(float *);



int main()
{
	float ticketprices[3];
	loadArray(ticketprices);
	printArray(ticketprices);
	 	
}
	
	void loadArray(float *tickets)
	
	{
		int x;
		for (x=0; x<3; ++x)
		
		{
			printf("Enter ticket price\t");
			scanf("%f", &tickets[x]);	             //sucscript notation
		}
		
	}
	
	void printArray(float *tickets)
	{
		int x;
		for (x=0; x<3; ++x)	          //for loop to show how many times it goes around
		{
			printf("%.2f\t", *tickets++);    //pointer notation
		}
		
		
		
	}

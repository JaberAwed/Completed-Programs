//Jaber Awed
// Making Change

#include <stdio.h>


float readInput();   	//function to return the amount owed
float readInput1();		//funcntion to return the amount paid
float calculateReturn(float amountNeeded, float amountPay);     //calculating the mount paid and returned
float change(int dollar, int quarter, int dime, int nickle, int penny, float amountReturn, float amountPay, float amountNeeded);   //calculate the change returned


int main()

{
	
	float amountNeeded, amountPay, amountReturn, calculateChange;
	int dollar, quarter, dime, nickle, penny;
	
	amountNeeded=readInput();  // returns the amount owed and storesit in amountNeeded
	amountPay=readInput1();
	amountReturn=calculateReturn(amountPay, amountNeeded);
	calculateChange= change(dollar, quarter, dime, nickle, penny, amountReturn, amountPay, amountNeeded);
	
	
	return 0;
	
	
}

float readInput()    //amount owed

{
	
	float amountNeeded;
	
	printf("Price total is\t");
	scanf("%f", &amountNeeded);
	
	return amountNeeded;


}


float readInput1()    //amount paid

{

	
	float amountPay;
	
	printf("\nCustomer paid\t");
	scanf("%f", &amountPay);
	
	return amountPay;



}



float calculateReturn(float amountNeeded, float amountPay)

{
	float amountReturn;
	
	amountReturn =  amountNeeded - amountPay;
	
	return amountReturn;
	
}

float change(int dollar, int quarter, int dime, int nickle, int penny, float amountReturn, float amountPay, float amountNeeded)   //the calculation
{

	float chg;
	chg = amountReturn;
		
			if (amountReturn >= 1)
		{
			dollar = amountReturn;
			amountReturn = amountReturn - dollar;
		}
	
	
			if (amountReturn >= 0.25)
		
		{
			quarter = amountReturn/0.25;
			amountReturn = amountReturn - (quarter * 0.25);
		}
		
			if (amountReturn >= 0.10)
		
		{				
			dime = amountReturn/0.10;
			amountReturn = amountReturn - (dime * 0.25);
		}
			if (amountReturn >= 0.10)
		
		{				
			nickle = amountReturn/0.05;
			amountReturn = amountReturn - (nickle * 0.05);
		}
			if (amountReturn >= 0.10)
		{				
			penny = amountReturn/0.01;
			amountReturn = amountReturn - (penny * 0.01);
		}
	
	printf("\nCustomer owes %.2f and paid %.2f ", amountNeeded, amountPay);   //display amount owed and paid
	printf("\nThe returned value is %.2f ", chg);   //display change
	printf("\nThe change is %d dollars, %d quarters, %d dimes, %d nickles, and %d pennys", dollar, quarter, dime, nickle, penny );   //displaying return amount
	
	
}

//Jaber Awed
// In-Class Shipping Charges Assignment 

#include <stdio.h>




float weightOfPackage(); 												//weight o package input
float rpp(float wop, float rate);					                	//rate per pound



int main()


	
{
	float wop,  rate;
	
	
	
	wop=weightOfPackage();                                         	       // weight of package input
	rate=rpp(wop, rate);											     	// rate per pound
	
		printf("\n\nThe Weight of Package is %.2f", wop);			    	//printing weight per package
		printf("\n\nThe Shipping charge is %.2f", rate);		      	//printing shipping cost in total
	
	return 0;
	
	
}

	float weightOfPackage()												//weight of package
	
	{
		float wop;
	
	printf("Weight of package is\t");
	scanf("%f", &wop);
	
	return wop;
		
		
	}
		

	float rpp(float wop, float rate)              	//rate per pound cost
	
	{
		
		
		
		if (wop <= 2)
		{
			rate = wop * 1.10;
			
		}
	else	if (wop <= 6)
		{
			rate = wop * 2.20;
		}
	else	if (wop <= 10)
		{
			rate = wop * 3.70;
		}
	else	if (wop > 10) 
		{
			rate = wop * 3.80;
		}
		
		
			return rate;
				
		
	
		
}
	
	

	
	

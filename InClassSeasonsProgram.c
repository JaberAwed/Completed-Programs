//Jaber Awed
//In Class Seasons Program

#include <stdio.h>

int main()

{
	
	
	printf("Type W for Winter");
	printf("\nType U for Summer");
	printf("\nType S for Spring");
	printf("\nType F for Fall");
	 
	 char season;
	 
	 
	printf("\n\nChoose your Favorite season\t");
	scanf("\n%c", &season);
	 
	 
	
	 

	switch (season)
	
	{
		case 'W': case 'w':
			printf("Your favorite season is Winter");
			break;
			
		case 'S': case 's':
			printf("Your favorite season is Spring");
			break;
			
		case 'U': case 'u':
			printf("Your favorite season is Summer");
			break;
			
		case 'F': case 'f':
			printf("Your favorite season is Fall");
			break;
			
		default:
			printf("Incorrect charecter");
		
		
		
		
	}
	
	
	
	
	
	
	
}

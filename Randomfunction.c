//Jaber Awed
// Random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int x;
	
	for (x=1; x<=3; x++)
	printf("\n%d", (rand() % 6)+1);
	
	return 0;
		
	
}

//Jaber Awed
//Vowel Count

#include <stdio.h>

int vowelcount (char []);

int main()
{	
	char vowel[50];
 
   printf("Enter the string\n");													
   gets(vowel);											//PUT then array name to determine the input in which can be put in
   vowelcount(vowel);									

}

int vowelcount (char vowel[])

{
	
		int v, c;										//decalre variable
		int a,e,i,o,u;
		a=0, e=0, i=0, o=0, u=0;						// set everything to 0 so we can read from scratch

		
	
	while (vowel[v]!='\0')								//while loop declaring if vowel stops at \0 <--- meaning nothing input
   {   
   		if(vowel[v]=='a' || vowel[v]=='A')
		a++;											//checking each for a vowel one by one
   	
	   	if(vowel[v]=='e' || vowel[v]=='E')
   		e++;

		if(vowel[v]=='i' || vowel[v]=='I')
   		i++;

		if(vowel[v]=='o' || vowel[v]=='O')
   		o++;
   		
   		if(vowel[v]=='U' || vowel[v]=='u')
   		u++;


      v++;
   }
   
   	 printf("\n A's: %d", a);
  	 printf("\n E's: %d", e);
  	 printf("\n I's: %d", i);
  	 printf("\n O's: %d", o);
  	 printf("\n U's: %d", u);
  	 
 	printf("\nTotal Vowels: %d", a+e+i+o+u);

  	 v != '\0';										//while loopstopping at \0 <---- meaning nothing is input
  		
}


      
 



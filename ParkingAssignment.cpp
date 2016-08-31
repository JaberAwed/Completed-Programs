// jaber awed
// parking garage assignment


#include <iostream>                                            //count in and out 
#include <iomanip>												//setprecision
using namespace std; 											//set here do not type again later
int main()
{
    float hours;												
    float charge;

    {
        cout << "enter hours parked ";							//output
        cin >> hours;											//input
          
		
    if (hours <= 3)												//calculations
        charge = 2;
    else if (hours >6)
        charge = 10;
    else if (hours > 3)
        charge = 2 + (hours - 3) * (.5);

    cout << "The total parking charge is\t$" << setprecision(3) << charge; 		//total amount with 2 decimal points
    
    return 0;
}
}

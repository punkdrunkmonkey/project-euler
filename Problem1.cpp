/*    
	PROJECT EULER : PROBLEM 1
	add all the natural numbers below one thousand that are multiples of 3 or 5.
*/
#include <iostream>
using namespace std;

int main()
{
	int number1 = 3,number2 = 5,i,result=0;
	for(i=0;i<1000;i++)
	{
		if((i%number1 ==0)||(i%number2==0)&&(i%(number1*number2)!= 0))
		  {
		  	result = result+i;
		  }
	}
	
	cout << "result = "<< result;
	return 0; 
}
// WrapInt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class WrapInt
{
	int value;
	char digitString[3];
public:
	WrapInt(int val)
	{
		value = val;// sets first attribute
		
		int tens = value / 10;// retrieve the first digit of the number
		int ones = value % 10;// retrieve the second digit of the number
		
		int asciiTens = tens + 48; //adds the ascii value
		int asciiOnes = ones + 48; //adds the ascii value
		
		digitString[0] = asciiTens; //set the first digit of the number onto the first position of the char array
		digitString[1] = asciiOnes; //set the second digit of the number onto the second position of the char array
		digitString[2] = '\0'; //last position empty
	}
	int getInt()
	{
		return value; // return the integer value
		
	}
	
	char* getString()
	{
		return digitString; //return the char array value
	}
};

int main()
{
	//int number = 56; //changed from hard coded number to user input
	int number;
	do
	{
		cout << "Please insert a 2 digit number \n"; //prompt user for value
		cout << " If you want to exit please insert 0." << endl;
		cin >> number; //store value
		if (number == 0) //exit option
		{
			cout << "Bye-bye!" << endl;
			system("PAUSE");
			return 0; //end program
		}
		else if (number >= 100 || number <= 10) //condition to be a 2 digit number
		{
			cout << "Invalid number!" << endl;
		}
		else //run WrapInt methods
		{
			WrapInt passNumber(number);
			cout << "The integer is: " << passNumber.getInt() << "\nAnd the char array is: " << passNumber.getString() << endl; //call methods
			
		}
	} while (number != 0);
	
};

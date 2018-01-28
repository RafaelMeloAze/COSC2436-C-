//------------------------------------------
//
//
//
//
//------------------Using recusion to power a number.
//------------------LAB 1 Spring 2018 - HCC
//------------------COSC 2436
//------------------Group: Rafael, Nataly, Breana
//
//
//
//
//--------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>



using namespace std;

/*
//------------------------DEFINE FILES
ifstream infile;
ofstream outfile;
*/

//--------------------------STRUCTURES


//--------------------------PROTOTYPES
void askUser(double&, int&);
double dpower(double, int);
double powerMath(double, int, double, int);








//====================================================MAIN FUNCTION------------------------

int main()
{
	//------------------------------------VARIABLES
	double base = 0;
	int power = 1;
	int again = 1;
	


	
	
	while (again == 1)  //------------RUN MULTIPLE TIMES
	{
		system("CLS");

		 //------------------------------------FUNCTION CALLS
		askUser(base, power);
		cout << "The total is : " << dpower(base, power) << endl;
		//cout << "The number " << base << " raised to the power of " << power << " equals : " << dpower(base, power) << endl;


		//-----------------------------------------ASK TO RUN AGAIN
		cout << "\n Would like to try again ? (Type 1 for YES or 2 For NO) : ";
		cin >> again;
		//-------------CHECK IF INPUT IS VALID
		while (again < 1 || again > 2 || cin.fail())
			{
			cout << "\nPlease check your entry. What you entered is not a valid." << endl;
			cout << "\n Would like to try again ? (Type 1 for YES or 2 For NO) : ";
			cin.clear();
			cin.ignore(2000, '\n');
			cin >> again;
			}
		//-----------------------------------------ASK TO RUN AGAIN


	}







	//system("pause");

	return 0;

}
//****************************************************END MAIN FUNCTION--------------------









//====================================================USER INTERFACE------------------------
void askUser(double& base, int& power)
{
	
	cout << "This program will allow you to power any real number. \n" << endl;
	cout << "Please enter your base number:";
	cin >> base;

	//-------------CHECK IF INPUT IS VALID
	while (cin.fail())   
	{
		cout << "\nPlease check your entry. What you entered is not a valid number." << endl;
		cout << "You must enter any integer number." << endl;
		cout << "Please enter your base number:";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> base;

	}

	cout << "Please enter your power number:";
	cin >> power;

	//-------------CHECK IF INPUT IS VALID
	while (power < 0 || cin.fail())
	{
		cout << "\nPlease check your entry. What you entered is not a positive whole number." << endl;
		cout << "You must enter any positive whole number." << endl;
		cout << "Please enter your base number:";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> power;

	}

	
}

//****************************************************END USERINTERFACE--------------------



//====================================================POWER FUNCTION------------------------
double dpower(double base, int power)
{
	int times = 2;
    double total = base * base;
		
	return powerMath(base, power, total, times);

}
//****************************************************END POWER FUNCTION--------------------


//====================================================POWER MATH FUNCTION------------------------
double powerMath(double base, int power, double total, int times)
{
	if(times == power)
	return total;
	
	total = total * base;
	++times;

	return 	powerMath(base, power, total, times);
}
//****************************************************END MATH FUNCTION--------------------



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
void askUser();
void power();
double powerMath();




//====================================================MAIN FUNCTION------------------------

int main()
{

	


	//------------------------------------FUNCTION CALLS
	askUser();






	system("pause");

	return 0;

}
//****************************************************END MAIN FUNCTION--------------------









//====================================================USER INTERFACE------------------------
void askUser()
{
	double base;
	int power;
	cout << "This program will allow you to power any real number. \n" << endl;
	cout << "Please enter your base number:";
	cin >> base;

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

	while (power < 0 || cin.fail())
	{
		cout << "\nPlease check your entry. What you entered is not a positive whole number." << endl;
		cout << "You must enter any positive whole number." << endl;
		cout << "Please enter your base number:";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> base;

	}

	


}

//****************************************************END USERINTERFACE--------------------



//====================================================POWER FUNCTION------------------------
void power()
{

}
//****************************************************END POWER FUNCTION--------------------


//====================================================POWER MATH FUNCTION------------------------
double powerMath()
{
	double total = 1;
	

	return total;
}
//****************************************************END MATH FUNCTION--------------------
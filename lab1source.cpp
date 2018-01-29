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

void userMenu(int&);


//---TASK 1
void askUser(double&, int&);
double dpower(double, int);
double powerMath(double, int, double, int);
//---TASK 2
void askUserStarLoop(int&);
void starsLoop(int);
void askUserStarRecursion(int&);
int starsRecursion(int, int);








//====================================================MAIN FUNCTION------------------------

int main()
{
	//------------------------------------VARIABLES
	double base = 0;
	int power = 1;
	int again = 1;
	int rows = 0;

	int menu = -1;
	bool runAgain = true;





	while (runAgain)
	{
		
		userMenu(menu);

		//----------------Menu Option 0 (Exit)
		if (menu == 0)
		{
			runAgain = false;  //--------exit menu
		}
		//-------------------------------------------------

		//----------------Menu Option 1 (POWER A NUMBER)
		if (menu == 1)
		{
			askUser(base, power); //--------power a number
		}
		//-------------------------------------------------

		//----------------Menu Option 2 (STARS IN LOOP)
		if (menu == 2)
		{
			askUserStarLoop(rows); //--------ask user stars in loop
		}
		//-------------------------------------------------
		
		//----------------Menu Option 2 (STARS IN LOOP)
		if (menu == 3)
		{
			askUserStarRecursion(rows); //--------ask user stars in loop
		}
		//-------------------------------------------------

	}




















	/*

	askUserStarRecursion(rows);
	



	



	while (again == 1)  //------------RUN MULTIPLE TIMES
	{
		system("CLS");

		//----------------------------------------------------------------FUNCTION CALLS

		askUser(base, power); //-------- USERINTERFACE

		


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
		//-----------------------------------------END ASK TO RUN AGAIN


	}


*/



	return 0;

}
//****************************************************END MAIN FUNCTION--------------------



//====================================================USER MENU------------------------
void userMenu(int& menu)
{

	int menusize = 5;


	cout << "--------------------------Option MENU--------------------------" << endl;
	cout << endl;
	cout << "               (1) Power a Number" << endl;
	cout << "               (2) Stars in Loop" << endl;
	cout << endl;
	cout << "               (3) Stars in Recursion" << endl;
	cout << "               (4) *********" << endl;
	cout << "               (5) *********" << endl;
	cout << endl;
	cout << "               (0) Exit Program" << endl;
	cout << "               (99) Display Option Menu" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;

	cout << "What would you like to do?";
	cin >> menu;

	while (cin.fail() || menu < 0 || menu > menusize) //--------------check input validity
	{

		if (menu == 99)
		{
			menu = -1;
			break;
		}

		cout << "Bad entry. Try again. Choose from the menu 1 - " << menusize << endl;
		cout << "What would you like to do?";
		cin.clear();
		cin.ignore(200, '\n');
		cin >> menu;
	}

}
//****************************************************END USER MENU--------------------





//====================================================USER INTERFACE------------------------
void askUser(double& base, int& power)
{
	system("CLS");
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
		cout << "Please enter your power number:";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> power;

	}



	if (base == 0 && power == 0)  //---- CONDITION IF BASE IS 0 AND POWER IS 0
	{
		cout << "The total is UNDIFINED " << endl;
	}
	else
	{
		cout << "The total is : " << dpower(base, power) << endl;
	}
	//cout << "The number " << base << " raised to the power of " << power << " equals : " << dpower(base, power) << endl;


	system("pause");
	system("CLS");


	/*

	
	while (again == 1)  //------------RUN MULTIPLE TIMES
	{
	system("CLS");

	//----------------------------------------------------------------FUNCTION CALLS

	askUser(base, power); //-------- USERINTERFACE




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
	//-----------------------------------------END ASK TO RUN AGAIN


	}


	*/









}

//****************************************************END USERINTERFACE--------------------



//====================================================POWER FUNCTION------------------------
double dpower(double base, int power)
{
	if (power == 0)
		return 1;
	if (power == 1)
		return base;

	int times = 2;
	double total = base * base;
	return powerMath(base, power, total, times);

}
//****************************************************END POWER FUNCTION--------------------


//====================================================POWER MATH FUNCTION------------------------
double powerMath(double base, int power, double total, int times)
{

	if (times == power)
		return total;

	total = total * base;
	++times;

	return 	powerMath(base, power, total, times);
}
//***************************************************END POWER MATH FUNCTION-----------------------





//====================================================USER INTERFACE STAR LOOP------------------------
void askUserStarLoop(int& rows)
{
	system("CLS");

	cout << "Please enter your rows number:";
	cin >> rows;
	

	//-------------CHECK IF INPUT IS VALID
	while (rows < 0 || cin.fail())
	{
		cout << "\nPlease check your entry. What you entered is not a valid number." << endl;
		cout << "You must enter any positive whole number." << endl;
		cout << "Please enter the number of rows :";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> rows;

	}

	starsLoop(rows);

	system("pause");
	system("CLS");
}

//****************************************************END USER INTERFACE STAR LOOP--------------------





//====================================================STARS LOOP FUNCTION------------------------

void starsLoop(int rows)
{
	int i = rows;

	
	
	for (i; i > 0; --i)
	{
		for (int j = i; j > 0; --j)
		{
			cout << "*";
		}
		cout << endl;
	}

}

//****************************************************END STARS LOOP FUNCTION--------------------



//====================================================USER INTERFACE STAR RECURSION------------------------
void askUserStarRecursion(int& rows)
{
	int col = 0;

	cout << "Please enter your rows number:";
	cin >> rows;


	//-------------CHECK IF INPUT IS VALID
	while (rows < 0 || cin.fail())
	{
		cout << "\nPlease check your entry. What you entered is not a valid number." << endl;
		cout << "You must enter any positive whole number." << endl;
		cout << "Please enter the number of rows :";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> rows;

	}

	int temp = starsRecursion(rows, col);
	cout << endl;

}

//****************************************************END USER INTERFACE STAR RECURSION--------------------


//====================================================STARS RECURSIVE FUNCTION------------------------

int starsRecursion(int rows, int col)
{
	if (rows == 1)
		return 0;
	
	if (col == rows)
	{
		--rows;
		col = 0;
		cout << endl;
	}

	cout << "*";
	++col;
	return starsRecursion(rows, col);
	
	

}

//****************************************************END STARS RECURSIVE FUNCTION--------------------
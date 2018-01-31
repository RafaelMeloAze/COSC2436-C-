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
void starsRecursionCol(int);
void starsRecursionRow(int);
//---TASK 3
void askUserPalindrome();
bool checkPalindrome(string);
//---TASK 4
void askUserFib1();
int fib1Recursion(int);
void askUserFib2();
int fib2Iterative(int);







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


		//----------------Menu Option 3 (STARS RECURSIVE)
		if (menu == 3)
		{
			askUserStarRecursion(rows); //--------ask user stars recursive
		}
		//-------------------------------------------------

		//----------------Menu Option 4 (Palindrome Check)
		if (menu == 4)
		{
			askUserPalindrome(); //--------ask user Palindrome
		}
		//-------------------------------------------------

		//----------------Menu Option 5 (FIBONACCI RECURSIVE)
		if (menu == 5)
		{
			askUserFib1(); //--------ask user FIBONACCI
		}
		//-------------------------------------------------

		//----------------Menu Option 6 (FIBONACCI ITERATIVE)
		if (menu == 6)
		{
			askUserFib2(); //--------ask user FIBONACCI ITERATIVE
		}
		//-------------------------------------------------

	}

	return 0;

}
//****************************************************END MAIN FUNCTION--------------------



//====================================================USER MENU------------------------
void userMenu(int& menu)
{
	system("CLS");

	int menusize = 6;


	cout << "--------------------------Option MENU--------------------------" << endl;
	cout << endl;
	cout << "               (1) Power a Number" << endl;
	cout << endl;
	cout << "               (2) Stars Iterative" << endl;
	cout << "               (3) Stars Recursive" << endl;
	cout << endl;
	cout << "               (4) Palindrome Check" << endl;
	cout << endl;
	cout << "               (5) Fibonacci Recursive" << endl;
	cout << "               (6) Fibonacci Iterative" << endl;
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
	while (cin.fail())
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

	if (power < 0)
	{
		power = -power;
		return 1 / (base * dpower(base, power - 1));
	}

	if (power > 0)
		return base * dpower(base, power - 1);



	/*
	int times = 2;
	double total = base * base;
	return powerMath(base, power, total, times);
	*/
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
	system("CLS");

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

	starsRecursionRow(rows);

	system("pause");
	system("CLS");

}

//****************************************************END USER INTERFACE STAR RECURSION--------------------


//====================================================STARS RECURSIVE FUNCTION------------------------

void starsRecursionCol(int col)
{

	if (col == 0)
	{
		cout << endl;
		return;
	}

	cout << "*";

	starsRecursionCol(col - 1);

}


void starsRecursionRow(int rows)
{

	if (rows == 0)
	{
		cout << endl;
		return;
	}

	starsRecursionCol(rows);
	starsRecursionRow(rows - 1);


}

//****************************************************END STARS RECURSIVE FUNCTION--------------------







//====================================================USER INTERFACE Palindrome------------------------
void askUserPalindrome()
{
	system("CLS");

	string word;
	bool yesPalindrome = false;

	//-----------------------------------------------------------------------
	cout << "Please enter your word to check if a Palindrome :";
	cin >> word;
	//-----------------------------------------------------------------------


	yesPalindrome = checkPalindrome(word);

	if (yesPalindrome)
	{
		cout << "The word " << word << " is a Palindrome." << endl;
	}
	else
	{
		cout << "The word " << word << " is NOT a Palindrome" << endl;
	}




	system("pause");
	system("CLS");
}
//****************************************************END USER INTERFACE Palindrome--------------------



//====================================================Palindrome FUNCTION------------------------
bool checkPalindrome(string word)
{
	
	if (word == string(word.rbegin(), word.rend()))
	return 1;


	return 0;



	/*

	if (equal(word.begin(), word.begin() + word.size() / 2, word.rbegin()))
		return 1;

	return 0;
*/


}
//****************************************************END Palindrome FUNCTION--------------------








//====================================================USER INTERFACE FIB1------------------------
void askUserFib1()
{
	system("CLS");

	int fib = 0;

	cout << "Please enter your FIB number:";
	cin >> fib;


	//-------------CHECK IF INPUT IS VALID
	while (fib < 0 || cin.fail())
	{
		cout << "\nPlease check your entry. What you entered is not a valid number." << endl;
		cout << "You must enter any positive whole number." << endl;
		cout << "Please enter the number of rows :";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> fib;

	}

	clock_t start = clock();	//----------------------Start Clock Timer

	cout << "The Fibonacci of " << fib << " is : " << fib1Recursion(fib) << endl;

	clock_t end = clock();		//----------------------End Clock Timer

	cout << "Time elapsed: " << ((double)end - start) / CLOCKS_PER_SEC << endl;   //--------------Display the Time Elapsed

	system("pause");
	system("CLS");
}
//****************************************************END USER INTERFACE FIB2--------------------



//====================================================FIB1 RECURSIVE FUNCTION------------------------
int fib1Recursion(int fib)
{

	if (fib == 0)
		return 0;

	if (fib == 1)
		return 1;

	if (fib == 2)
		return 1;

	return fib1Recursion(fib - 1) + fib1Recursion(fib - 2);

}
//****************************************************END FIB1 RECURSIVE FUNCTION--------------------




//====================================================USER INTERFACE FIB2 ITERATIVE------------------------
void askUserFib2()
{
	system("CLS");

	int fib = 0;

	cout << "Please enter your FIB number:";
	cin >> fib;


	//-------------CHECK IF INPUT IS VALID
	while (fib < 0 || cin.fail())
	{
		cout << "\nPlease check your entry. What you entered is not a valid number." << endl;
		cout << "You must enter any positive whole number." << endl;
		cout << "Please enter the number of rows :";
		cin.clear();
		cin.ignore(2000, '\n');
		cin >> fib;

	}

	clock_t start = clock();	//----------------------Start Clock Timer

	cout << "The Fibonacci of " << fib << " is : " << fib2Iterative(fib) << endl;

	clock_t end = clock();		//----------------------End Clock Timer

	cout << "Time elapsed: " << ((double)end - start) / CLOCKS_PER_SEC << endl;   //--------------Display the Time Elapsed

	system("pause");
	system("CLS");
}
//****************************************************END USER INTERFACE FIB2 ITERATIVE--------------------



//====================================================FIB2 ITERATIVE FUNCTION------------------------
int fib2Iterative(int fib)
{
	int num1 = 1;
	int num2 = 1;
	int num3 = 0;

	if (fib == 0)
		return 0;

	if (fib == 1)
		return 1;

	if (fib == 2)
		return 1;

	for (int i = fib; i > 0; --i)
	{
		num2 = num1;
		num1 = num3;
		num3 = num1 + num2;

	}

	return num3;
}
//****************************************************END FIB2 ITERATIVE FUNCTION--------------------
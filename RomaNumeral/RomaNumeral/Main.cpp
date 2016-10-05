#include <iostream>
using namespace std;

//Program: RomanNumeral
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: Prompts user to enter a number between 1 and 10
//				then converts it over to roman numeral form.


int main()
{
	//declare variables
	int iNum;

	//get input
	cout << "Enter Number Between 1 and 10: ";
	cin >> iNum;

	//switch statement
	switch (iNum)
	{
	case 1 :
		cout << "1 = I" << endl;
		break;
	case 2 :
		cout << "2 = II" << endl;
		break;
	case 3:
		cout << "3 = III" << endl;
		break;
	case 4:
		cout << "4 = IV" << endl;
		break;
	case 5:
		cout << "5 = V" << endl;
		break;
	case 6:
		cout << "6 = VI" << endl;
		break;
	case 7:
		cout << "7 = VII" << endl;
		break;
	case 8:
		cout << "8 = VIII" << endl;
		break;
	case 9:
		cout << "9 = IX" << endl;
		break;
	case 10:
		cout << "10 = X" << endl;
		break;
	default:
		cout << "INVALID NUMBER ENTERED" << endl;
	}



	return 0;
}
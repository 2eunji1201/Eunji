// MyFirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//function to check if the input is number or string
bool check_number(string str) {
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == false)
			return false;
		return true;
	}
}

int main()
{
	/*string str;
	cout << "please put string or number, I will guess" << endl;
	cin >> str;
	
	if (check_number(str))
		cout << str << " is number!" << endl;
	else
		cout << str << " is a string!" << endl;*/

	//check if the input is integer of it has floating number
	//cout << "Please put any number." << endl;
	//double num, intPart, fractPart;
	//cin >> num;
	//fractPart = modf(num, &intPart);
	//if (fractPart > 0)
	//	cout << "your input " << num << " has floating number" << endl;
	//else
	//	cout << "your input " << num << " is integer" << endl;

	cout << "Int min value is " << INT_MIN << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


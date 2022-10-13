// variablesExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int myNum; //gives data types as whole numbers 
	string myName;//data type in the form of words
	char gender;//char only accepts a single byte
	float temp;//data can have decimal points
	bool present;// data comes only in the form of True or False
	double bankBalance;//similar to the float but allows for longer numbers
	int age, year, phone; //declaration of multiple variables of the same data type

	myNum = 2;
	//cout << myNum;

	int myNumb = 345; // declaration of both a variable and the initializaiton of the variable
	//cout << myNumb;// display the variable data

	//initialization of the variables
	age = 25;
	year = 2015;
	phone =9898998;
	present = "True";
	myName = "Micheal";
	temp = 24.5;
	bankBalance = 23344555;
	gender = 'F';

	//display of initialized variables
	cout << "Age = " << age;
	cout << "\nName = " << myName;
	cout << "\nYear = " << year;
	cout << "\nGender = " << gender;
	cout << "\nPhone = " << phone;
	cout << "\nTemperature = " << temp;
	cout << "\nBank Balance = " << bankBalance;
	cout << "\nPresent = " << present;





}


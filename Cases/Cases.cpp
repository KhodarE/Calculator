// Cases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int a;
int b;
int select;
double answer;

void printab() {
	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;
}

void printa() {
	cout << "Enter value for a: ";
	cin >> a;
}

void options() {
	cout << "Select a switch from below: " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Modulo" << endl;
	cout << "6. Log2" << endl;
	cout << "7. Log10" << endl;
	cout << "0. EXIT" << endl;
	cin >> select;
}
void cases() {
	switch (select) {
	case 1:
		printab();
		answer = a + b;
		cout << "Addition: " << a << " + " << b << " = " << answer << endl;
		cout << "Do you want to continue";
		break;
	case 2:
		printab();
		answer = a - b;
		cout << "Subtraction: " << a << " - " << b << " = " << answer << endl;
		break;
	case 3:
		printab();
		answer = a * b;
		cout << "Multiplication: " << a << " * " << b << " = " << answer << endl;
		break;
	case 4:
		printab();
		answer = a / b;
		cout << "Division: " << a << " / " << b << " = " << answer << endl;
		break;
	case 5:
		printab();
		answer = a % b;
		cout << "Modulo: " << a << " % " << b << " = " << answer << endl;
		break;
	case 6:
		printa();
		answer = log2(a);
		cout << "Log2: " << a << " = " << answer << endl;
		break;
	case 7:
		printa();
		answer = log10(a);
		cout << "Log10: " << a << " = " << answer << endl;
		break;
	case 0:
		cout << "EXIT! " << endl;
		break;
	default:
		cout << "Invalid select for switch. Please try again" << endl;
		break;
	}
}

int main()
{
	int tries = 1;
	while (tries != -1) {
		options();
		cases();
		cout << "If you wish to continue using the calculator press any integer" << endl;
		cout << "Input Integer (-1 to EXIT)" << endl;
		cin >> tries;
	}
}
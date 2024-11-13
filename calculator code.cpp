

#include <iostream>
using namespace std;
int main()

{
	//make
	 char op;
	double num1;
	double num2;
	double result;
	cout << "********************calculator********************\n";
	cout << "enter first number#1:\n";
	cin >> num1;
	cout << "enter secend number#1:\n";
	cin >> num2;
	cout << "enter operation (+/*-):\n";
	cin >> op;
	
	switch (op) {

	case'+':
		result = num1 + num2;

	break;

	case'-':
		result = num1 - num2;

	break;

	case'*':
		result = num1 * num2;

	break;

	case'/':
		result = num1 / num2;
	default:
		printf("error");
		

	}

cout << result;








	}

















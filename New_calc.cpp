// New_calc.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include "Calc.h"

using namespace std;


int main()
{
	int key, bo;
	double a, b, c;
	bool d;
	do
	{
		cout << "Input the number of operation : " << endl;
		cout << "1: '+';  2: '-';   3: '*';   4: '/';   0: 'exit';" << endl;
		do
		{
			cin >> key;
			if (key > 4 or key < 0)
			{
				cout << "Operation don't exist!" << endl;
				d = false;
			}
			else d = true;
		} while (d != true);
		switch (key)
		{
		case 1:
			cout << "Input a:";
			cin >> a;
			cout << "Input b:";
			cin >> b;
			cout << "Result :" << sum(a, b) << endl;
			break;
		case 2:
			cout << "Input a:";
			cin >> a;
			cout << "Input b:";
			cin >> b;
			cout << "Result :" << dif(a, b) << endl;
			break;
		case 3:
			cout << "Input a:";
			cin >> a;
			cout << "Input b:";
			cin >> b;
			cout << "Result :" << mul(a, b) << endl;
			break;
		case 4:
			cout << "Input a:";
			cin >> a;
			cout << "Input b:";
			cin >> b;
			do {
				cout << "Input b:";
				cin >> b;
				if (b == 0)
					cout << "Enter a non-zero number" << endl;
				break;
			} while (b == 0);
			cout << "Result :" << div(a, b) << endl;
			break;
		}
	} while (key != 0);
	system("pause");
	return 0;
}


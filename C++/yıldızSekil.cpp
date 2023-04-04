#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << setw(3);
	for (int i = 0;i < 3;i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << setw(2);
	cout << "*" << setw(4)<<"*";
	cout << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << "*" << setw(6) << "*" << endl;
	}
	cout << setw(2);
	cout << "*" << setw(4) << "*";
	cout << setw(3);
	cout << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << "*";
	}
}
#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int satirNumarasi;
	for (int i = 0; i < (satirNumarasi * 2) + 4; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = satirNumarasi; i >= 1; i--)
	{

		cout << "*";
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		cout << "*";

		for (int j = satirNumarasi; j > i; j--)
		{
			cout << " ";
		}
		for (int j =satirNumarasi; j > i; j--)
		{
			cout << " ";
		}
		cout << "*";

		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		cout << "*";
		cout <<endl;
	}
	for (int i = 0; i < (satirNumarasi * 2) + 4; i++)
	{
		cout << "*";
	}
	cout <<endl;

	for (int i = 0; i < (satirNumarasi * 2) + 4; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = satirNumarasi; i >= 1; i--)
	{

		cout << "*";
		for (int j = satirNumarasi; j > i; j--)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 1; j <= i; j++)

		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = satirNumarasi; j > i; j--)
		{
			cout << " ";
		}

		cout << "*";
		cout << endl;
	}
	for (int i = 0; i < (satirNumarasi * 2) + 4; i++)
	{
		cout << "*";
	}
	return 0;
}
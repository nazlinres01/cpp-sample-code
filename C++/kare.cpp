#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int kenar;
	cout << "bir kenar giriniz:";
	cin >> kenar;
	for (int i = 0;i < kenar;i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0;i <(kenar-2);i++)
	{
		cout << "*" <<setw(kenar-1)<<"*"<<endl;
	}
	for (int i = 0;i < kenar;i++)
	{
		cout << "*";
	}


}
#include<iostream>
using namespace std;
int main()
{
	int sayi1;
	int sayi2;
	cout << "sayi1:";
	cin >> sayi1;
	cout << "sayi2:";
	cin >> sayi2;
	if (sayi1 > sayi2)
	{
		cout << sayi1 << " " << sayi2 << "'den buyuktur";
	}
	if (sayi2 > sayi1)
	{
		cout << sayi2 << " " << sayi1 << "'den buyuktur";
	}

}
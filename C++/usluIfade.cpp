#include<iostream>
using namespace std;
int main()
{
	int taban,kuvvet;
	int sonuc;
	sonuc = 1;
	cout << "taban gir:";
	cin >> taban;
	cout << "kuvvet gir:";
	cin >> kuvvet;
	for (int i = 1;i <= kuvvet;i++) 
	{
		sonuc = sonuc * taban;
	}
	cout << sonuc;
		

		

	






}
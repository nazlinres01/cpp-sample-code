#include<iostream>
using namespace std;
int main()
{
	int sayi;
	cout << "sayi:";
	cin >> sayi;
	int toplam = 1;
	for (int i = 1;i <= sayi;i++)
	{
		toplam = toplam * i;
		
	}
     cout << toplam;




}
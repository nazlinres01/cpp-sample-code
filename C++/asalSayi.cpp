#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		int sayi;
		int bolunen = 0;
		cout << "lutfen bir sayi giriniz..."<<endl;
		cin >> sayi; //kullanýcýdan sayýnýn girilmesi isteniyor

		for (int a = 2; a < sayi; a++)
		{
			if (sayi % a == 0)
			{
				bolunen++;
			}
		}
		if (bolunen > 0)
		{
			cout << "Girilen sayi asal degildir." << endl;
		}
		else
		{
			cout << "Girilen sayi asaldir." << endl;
		}
	}
}

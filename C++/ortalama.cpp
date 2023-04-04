#include<iostream>
using namespace std;
int main()
{
	int sayi;
	int kacSayi;
	int ort;
	string cevap;
	int toplam = 0;
	while (true)
	{
		cout << "bir sayi girmek ister misiniz...." << endl;
		cin >> cevap;
		if (cevap != "HAYIR")
		{
            cout << "sayi:";
			cin >> sayi;
			toplam = toplam + sayi;
		}
		else 
		{ 
			 cout << "toplam:" << toplam<<endl;
			 cout << "kac tane sayi girdiniz...." << endl;
			 cin >> kacSayi;
			 ort = toplam / kacSayi;
			 cout << "ortalama:" << ort<<endl;
	         cout << "cikis yapiliyor...."<<endl;	
			 break;
		}  
		
	}
	
}
#include<iostream>
using namespace std;
int main()
{
	int cevap;
    cout << "bir sayi giriniz:";
	cin >> cevap;
	switch (cevap)
	{
	 case 0:
	 	cout << "pazartesi";
		break;
	 case 1:
		cout << "sali";
		break;
	 case 2:
		cout << "carsamba";
		break;
	 case 3:
		cout << "persembe";
		break;
	 case 4:
		cout << "cuma";
		break;
	 case 5:
		cout << "cumartesi";
		break;
	 case 6:
		cout << "pazar";
		break;
	 default:
		cout << "girdiginiz sayi hatalidir......";
		break;
	}
}
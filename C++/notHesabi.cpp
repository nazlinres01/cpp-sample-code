#include<iostream>
using namespace std;
int main()
{
	int VizeNotu;
	int FinalNotu;
	float ortalama = 0;
	cout << "vize notunu giriniz:" << endl;
	cin >> VizeNotu;
	cout << "final notunu giriniz:" << endl;
	cin >> FinalNotu;
	ortalama = (VizeNotu * 4 / 10) + (FinalNotu * 6 / 10);
	cout << "ortalamaniz:" << ortalama;
	return 0;
}
















#include<iostream>

using namespace std;
int main()
{
	double vizeNotu,kisaSinavNotu,odevNotu,finalNotu,yilIci,yilSonu;
	cout << "Vize notunu giriniz:";
	cin >> vizeNotu;
	cout << "Kisa sinav notunu giriniz:";
	cin >> kisaSinavNotu;
	cout << "Odev notunu giriniz:";
	cin >> odevNotu;
	cout << "Final notunu giriniz";
	cin >> finalNotu;
	yilIci = (vizeNotu + kisaSinavNotu + odevNotu)/3;
	yilSonu = (yilIci*0.4)+(finalNotu*0.6);
	if (0 < yilSonu && yilSonu <= 45)
		cout << "FF";
	else if (45 < yilSonu && yilSonu <= 60)
		cout << "DD";
	else if (60 < yilSonu && yilSonu <= 75)
		cout << "CC";
	else if (75 < yilSonu && yilSonu <= 90)
		cout << "BB";
	else if (90 < yilSonu && yilSonu <= 100)
		cout << "AA,Tebrikler";
	
		


   









}








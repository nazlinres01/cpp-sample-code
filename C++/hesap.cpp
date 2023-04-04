#include<iostream>
using namespace std;
int main()
{
	float sayi1;
	float sayi2;
	cout << "sayi1:";
	cin >> sayi1;
	cout << "sayi2:";
	cin >> sayi2;
	cout << "toplam" << endl;
	int toplama = sayi1 + sayi2;
	cout << "sonuc:" << toplama<<endl;
	cout <<"cikarma"<<endl;
	int cikarma = sayi1 - sayi2;
	cout << "sonuc:" << cikarma<<endl;
	cout << "ortalama" <<endl;
	float ortalama = (sayi1 + sayi2) / 2;
	cout << "sonuc:" << ortalama<<endl;
	cout <<"bolme" <<endl;
	int bolum = sayi1 / sayi2;
	cout << "sonuc:" << bolum<<endl;
	int kalan = sayi1 - bolum * sayi2;
	cout << "kalan:" << kalan<<endl;
	cout << "carpim"<<endl;
	int carpim = sayi1 * sayi2;
    cout << "sonuc:" << carpim<<endl;
}
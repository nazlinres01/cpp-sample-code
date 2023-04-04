#include<iostream>
#include<fstream>
#include<time.h>
using namespace std;
class Ogrenci
{
 private:
	int sinif;
	int isim;
	int soyÝsim;
	int numara;
public:
	void okumaDosyasi()
	{
		fstream dosya;
		dosya.open("isimler.txt",ios::in);
		if (dosya.is_open() == true)
		{
			string isimler;
			dosya >> isimler;
		}
		dosya.close();

	}

};
class DosyaYonetim
{


};
class Sinif
{
 
};
class Okul
{
	
};

class Program
{

};




int main()
{
	srand(time(0));
	Ogrenci ogr1;
	ogr1.okumaDosyasi();
	
	
	cout << "1.Ogrenci Ekle" << endl;
	cout << "2.Sinif Ekle" << endl;
	cout << "3.Ogrenci Degistir" << endl;
	cout << "4.Ogrenci Sil" << endl;
	cout << "5.Sinif Sil" << endl;
	cout << "6.Cikis" << endl;

}
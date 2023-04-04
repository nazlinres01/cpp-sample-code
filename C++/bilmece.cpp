#include<iostream>
#include<locale.h> 
#include<string>
using namespace std;
int main()
{
   setlocale(LC_ALL, "Turkish"); 
   string ad,soyad;
   cout << "Lütfen adýný ve soyadýný gir" << endl;
   cout << "ad:";
   getline(cin, ad);
   cout<< "soyad:";
   getline(cin, soyad);
   cout << "Hoþ Geldin!!! " << endl;
   cout << endl;
   cout << "----------BÝLMECELER----------" << endl;
   cout << endl;
   cout << "1.Yaþý yok baþý yok adam olmuþ söz keser."<<endl;
   while (true)
   {
       string cevap;
       cout << "cevabýnýz:";
       cin >> cevap;

       if (cevap == "nokta")
       {
           cout << "Doðru cevap...Tebrikler!!!";
           break;
       }
       else
       {
          cout << "Yanlýþ cevap...Tekrar deneyiniz!!!";
          cout << endl;
       }   
 
   }
  
   cout << endl;
   cout << endl;
   cout << "2.Kolu var, eli yok, karný yarýk karný yok." << endl;
   while (true)
   {
       string cevap1;
       cout << "cevabýnýz:";
       cin >> cevap1;

       if (cevap1 == "ceket")
       {
          cout << "Doðru cevap...Tebrikler!!!";
          break;
       }
       else
          cout << "Yanlýþ cevap...Tekrar deneyiniz!!!";
          cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "3.Beyaz sarayda sarý padiþah." << endl;
   while (true)
   {
       string cevap3;
       cout << "cevabýnýz:";
       cin >> cevap3;

       if (cevap3 == "yumurta")
       {
           cout << "Doðru cevap...Tebrikler!!!";
           break;
       }
       else
           cout << "Yanlýþ cevap...Tekrar deneyiniz!!!";
       cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "4.Bir aðacý oymuþlar içine dünyayý koymuþlar." << endl;
   while (true)
   {
       string cevap4;
       cout << "cevabýnýz:";
       cin >> cevap4;

       if (cevap4 == "televizyon")
       {
           cout << "Doðru cevap...Tebrikler!!!";
           break;
       }
       else
           cout << "Yanlýþ cevap...Tekrar deneyiniz!!!";
       cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "5.Yarým kaþýk duvara yapýþýk." << endl;
   while (true)
   {
       string cevap5;
       cout << "cevabýnýz:";
       cin >> cevap5;

       if (cevap5 == "kulak")
       {
           cout << "Doðru cevap...Tebrikler!!!";
           break;
       }
       else
           cout << "Yanlýþ cevap...Tekrar deneyiniz!!!";
       cout << endl;
   }
   cout << endl;
   cout << endl;
   cout << "Tebrikler " << ad << " testi bitirdin...";
   cout << endl;
   
   
}
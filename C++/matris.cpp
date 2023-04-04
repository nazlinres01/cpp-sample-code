#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	while (true)
	{
		int secenek;
		cout << "1.Matrisleri Topla" << endl;
		cout << "2.Matrisleri Cikar" << endl;
		cout << "3.Matrisleri Carp" << endl;
		cout << "4.Matrislerin Transpozesi" << endl;
		cout << "Seceneginiz nedir......" << endl;
		cin >> secenek;
		if (secenek > 4)
		{
			cout << "Hatali secenek girdiniz,lütfen tekrar deneyiniz...";
		}
	}
	    int secenek, satirSayisi, sutunSayisi, satirSayisi2, sutunSayisi2, satirSayisi3, sutunSayisi3;
		int A[25][25];
		int B[25][25];
		int toplamMatris[25][25];
		int carpimMatris[25][25];
		int cikarmaMatris[25][25];
		int transpozeMatris[25][25];
	switch (secenek)
	{
	   case 1:
		   cout << "Matrislerin satir ve sutun sayilarini giriniz...." << endl;
	       cout << "satir sayisini giriniz:";
	       cin >> satirSayisi;
	       cout << "sutun sayisini giriniz:";
	       cin >> sutunSayisi;
		   cout << "A matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {
			  
			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   A[i][j] = rand() % 20;
				   cout << A[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "B matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {
			   
			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout<<setw(5);
				   B[i][j] = rand() % 20;
				   cout << B[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "A ve B matrisinin toplami";
		   cout << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {
			  
			   for (int j = 0;j < sutunSayisi;j++)
			   { 
				   cout << setw(5);
				   toplamMatris[i][j] = A[i][j] + B[i][j];
				   cout << toplamMatris[i][j];
			   }
			   cout << endl;
		   }
		   break;

	   case 2:
		   cout << "Matrislerin satir ve sutun sayilarini giriniz...." << endl;
		   cout << "satir sayisini giriniz:";
		   cin >> satirSayisi;
		   cout << "sutun sayisini giriniz:";
		   cin >> sutunSayisi;
		   cout << "A matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   A[i][j] = rand() % 20;
				   cout << A[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "B matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   B[i][j] = rand() % 20;
				   cout << B[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "A ve B matrisini cikarma";
		   cout << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   cikarmaMatris[i][j] = A[i][j] - B[i][j];
				   cout << cikarmaMatris[i][j];
			   }
			   cout << endl;
		   }
		   break;
	   case 3:
		   cout << "Matrislerin satir ve sutun sayilarini giriniz...." << endl;
		   cout << "satir sayisini giriniz:";
		   cin >> satirSayisi;
		   cout << "sutun sayisini giriniz:";
		   cin >> sutunSayisi;
		   cout << "A matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   A[i][j] = rand() % 20;
				   cout << A[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "B matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j <sutunSayisi;j++)
			   {
				   cout << setw(5);
				   B[i][j] = rand() % 20;
				   cout << B[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "A ve B matrisinin carpimi";
		   cout << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {
			    
			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   carpimMatris[i][j] = 0;
				   for (int k = 0;k < sutunSayisi;k++)
				   {
					   carpimMatris[i][j] = carpimMatris[i][j] + (A[i][k] * B[k][j]);
					   
				   }
				   cout << carpimMatris[i][j];
			   }
			   cout << endl;
		   }
		   break;
	   case 4:
		   cout << "A matrisi" << endl;
		   cout << "satir sayisini giriniz:";
		   cin >> satirSayisi;
		   cout << "sutun sayisini giriniz:";
		   cin >> sutunSayisi;
		   cout << "B matrisi" << endl;
		   cout << "satir sayisini giriniz:";
		   cin >> satirSayisi2;
		   cout << "sutun sayisini giriniz:";
		   cin >> sutunSayisi2;
		   cout << "A matrisi" << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   A[i][j] = rand() % 20;
				   cout << A[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "B matrisi" << endl;
		   for (int i = 0;i < satirSayisi2;i++)
		   {

			   for (int j = 0;j < sutunSayisi2;j++)
			   {
				   cout << setw(5);
				   B[i][j] = rand() % 20;
				   cout << B[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "A matrisinin transpozesi";
		   cout << endl;
		   for (int i = 0;i < satirSayisi;i++)
		   {

			   for (int j = 0;j < sutunSayisi;j++)
			   {
				   cout << setw(5);
				   transpozeMatris[i][j] = A[j][i];
				   cout << transpozeMatris[i][j];
			   }
			   cout << endl;
		   }
		   cout << endl;
		   cout << "B matrisinin transpozesi";
		   cout << endl;
		   for (int i = 0;i < satirSayisi2;i++)
		   {

			   for (int j = 0;j < sutunSayisi2;j++)
			   {
				   cout << setw(5);
				   transpozeMatris[i][j] = B[j][i];
				   cout << transpozeMatris[i][j];
			   }
			   cout << endl;
		   }
		   break;


	}



}
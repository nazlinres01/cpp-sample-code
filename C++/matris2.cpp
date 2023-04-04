#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int satirSayisi;
	int sutunSayisi;
	cout << "satir sayisini giriniz.....:";
	cin >> satirSayisi;
	cout << "sutun sayisini giriniz.....:";
	cin >> sutunSayisi;
	int A[25][25];
	int B[25][25];
	int transpozA[25][25];
	int transpozB[25][25];
	int carpim[25][25];
	int toplam[25][25];
	cout << "A matrisi" << endl;
	for (int i = 0;i < satirSayisi;i++)
	{
		for (int j = 0;j < sutunSayisi;j++)
		{
			cout << setw(5);
			A[i][j] = rand() % 10;
			cout << A[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout <<"B matrisi" << endl;
	for (int i = 0;i < satirSayisi;i++)
	{
		for (int j = 0;j < sutunSayisi;j++)
		{
			cout << setw(5);
			B[i][j] = rand() % 10;
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
			toplam[i][j] = A[i][j] + B[i][j];
			cout << toplam[i][j];
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
			carpim[i][j] = 0;
			for (int k = 0;k < sutunSayisi;k++)
			{
				
				carpim[i][j] = carpim[i][j]+(A[i][k] * B[k][j]);
				
			}
			cout << carpim[i][j];
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
			transpozA[i][j] = A[j][i];
			cout << transpozA[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "B matrisinin transpozesi";
	cout << endl;
	for (int i = 0;i < satirSayisi;i++)
	{
		for (int j = 0;j < sutunSayisi;j++)
		{
			cout << setw(5);
			transpozB[i][j] = B[j][i];
			cout << transpozB[i][j];
		}
		cout << endl;
	}
}
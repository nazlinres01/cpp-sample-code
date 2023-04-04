#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int satirSayisi, sutunSayisi, determinant;
	const int max = 25;
	float matris[max][max];
	cout << "satir sayisi:";
	cin >> satirSayisi;
	cout << "sutun sayisi:";
	cin >> sutunSayisi;

	if (satirSayisi == sutunSayisi)
	{
		cout << "Determinant hesaplanabilir." << endl;

		for (int i = 0;i < satirSayisi;i++)
		{
			for (int j = 0;j < sutunSayisi;j++)
			{
				cout << setw(2);
				cin >> matris[i][j];
				cout << matris[i][j];
			}
			cout << endl;
		}
		
		determinant = 1 / (pow(matris[0][0], (satirSayisi - 2)));
		
		
	}
	else
	{
		cout << "Determinant hesaplanamaz.";
	}





}

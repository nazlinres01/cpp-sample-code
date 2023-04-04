#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int denklemSayisi, bilinmeyenSayisi, matrisBoyutu;
	int i, j, k, t, x;
	const int max = 20;
	double katsayi, sabitdeger;
	double matris[max][max];
	double matrisSonuc[max][1];
	double matrisOlusan[max][max + 1];
	cout << "denklem sayisi=";
	cin >> denklemSayisi;
	bilinmeyenSayisi = denklemSayisi;
	matrisBoyutu = denklemSayisi;

	for (i = 1;i <= denklemSayisi;i++)
	{
		cout << "****" << i << ".denklem****" << endl;
		for (j = 1;j <= bilinmeyenSayisi;j++)
		{
			cout << j << ".katsayi=";
			cin >> katsayi;
			matris[i][j] = katsayi;
		}
		cout << "sabit deger=";
		cin >> sabitdeger;
		matrisSonuc[i][1] = sabitdeger;

	}
	/*cout << endl;

	for (i = 1;i <= matrisBoyutu;i++)
	{
		for (j = 1;j <= matrisBoyutu;j++)
		{
			cout << setw(3) << matris[i][j];
		}
		cout << setw(3) << matrisSonuc[i][1];
		cout << endl;
	}*/
	cout << endl;
	
	for (k = 1;k <= matrisBoyutu;k++)
	{
		for (t = 1;t <= matrisBoyutu + 1;t++)
		{
			if (t <= matrisBoyutu)
			{
				matrisOlusan[k][t] = matris[k][t];
			}
			matrisOlusan[k][matrisBoyutu + 1] = matrisSonuc[k][1];
			
			cout << setw(3) << matrisOlusan[k][t];
		}
		cout << endl;
	}

	
	for (x = matrisBoyutu + 1;x >= 1;x--)
	{
		matrisOlusan[1][x] /= matrisOlusan[1][1];	
		matrisOlusan[2][x] -= matrisOlusan[1][x] * matrisOlusan[2][1];
		matrisOlusan[3][x] -= matrisOlusan[1][x] * matrisOlusan[3][1];
	}

	cout << "*******degisim*******" << endl;
	for (k = 1;k <= matrisBoyutu;k++)
	{
		for (t = 1;t <= matrisBoyutu + 1;t++)
		{
			cout << setw(10) << matrisOlusan[k][t];
		}
		cout << endl;
	}

	for (x = matrisBoyutu + 1;x >= 1;x--)
	{
		matrisOlusan[2][x] /= matrisOlusan[2][2];
		matrisOlusan[3][x] -= matrisOlusan[2][x] * matrisOlusan[3][2];
	}

	cout << "*******degisim2*******" << endl;
	for (k = 1;k <= matrisBoyutu;k++)
	{
		for (t = 1;t <= matrisBoyutu + 1;t++)
		{
			cout << setw(10) << matrisOlusan[k][t];
		}
		cout << endl;
	}

	for (x = matrisBoyutu + 1;x >= 1;x--)
	{
		matrisOlusan[3][x] /= matrisOlusan[3][3];
	}

	cout << "*******degisim3*******" << endl;
	for (k = 1;k <= matrisBoyutu;k++)
	{
		for (t = 1;t <= matrisBoyutu + 1;t++)
		{
			cout << setw(10) << matrisOlusan[k][t];
		}
		cout << endl;
	}


}	
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int matrisBoyutu = 3;
	int i = 0;
	int j = 0;
	int x;
	int t;
	float matrisA[matrisBoyutu][matrisBoyutu];
	float matrisB[matrisBoyutu][matrisBoyutu + 2];
	for (i = 0;i < matrisBoyutu;i++)
	{
		for (j = 0;j < matrisBoyutu;j++)
		{
			cout << "matris[" << i << "]" << "[" << j << "]=";
			cin >> matrisA[i][j];
		}
	}
	cout << "*****olusturulan matris*****" << endl;
	for (i = 0;i < matrisBoyutu;i++)
	{
		for (j = 0;j < matrisBoyutu;j++)
		{		
			cout << setw(2) << matrisA[i][j];
		}
		cout << endl;
	}
	
	

	for (i = 0;i < matrisBoyutu;i++)
	{
		for (j = 0;j < matrisBoyutu+2;j++)
		{
			if (i == 3)
			{
				for (t = 0; t < 1; t++)
				{
					for (x = 0; x < 3; x++)
					{
						matrisB[i][x] = matrisA[t][x];
					}
				}

			}
			else if (i == 4)
			{
				for (t = 1; t < 2; t++)
				{
					for (x = 0; x < 3; x++)
					{
						matrisB[i][x] = matrisA[t][x];
					}
				}
			}
			else
			{
				matrisB[i][j] = matrisA[i][j];
			}
		}

	}

	int bir = 1;
	int iki = 1;
	int uc = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((i + j) == 2)
			{
				bir = matrisB[i][j] * bir;
			}
			if ((i + j) == 3)
			{
				iki = matrisB[i][j] * iki;
			}
			if ((i + j) == 4)
			{
				uc = matrisB[i][j] * uc;
			}
		}
	}
	int dort = 1;
	int bes = 1;
	int alti = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				dort = matrisB[i][j] * dort;
			}
			if ((i - j) == 1)
			{
				bes = matrisB[i][j] * bes;
			}
			if ((i - j) == 2)
			{
				alti = matrisB[i][j] * alti;
			}
		}
	}

	int sonuc = ((alti + bes + dort) - (bir + iki + uc));
	cout << "determinant:" << sonuc;
}


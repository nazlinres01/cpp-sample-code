#include<iostream>
using namespace std;

double fact(int a)
{
	double faktoriyel = 1;
	for (int i = 1;i <= a;i++)
	{
		faktoriyel *= i;
	}
	return faktoriyel;
}
int main()
{
	double sonuc;
	int n, r;
	cout << "n:";
	cin >> n;
	for (r = 0;r <= n;r++)
	{
		sonuc = fact(n) / (fact(r) * fact(n - r));
		cout << sonuc << endl;
	}
}



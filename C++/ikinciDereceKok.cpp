#include<iostream>
using namespace std;
int main()
{
	float a,b,c,delta,kok1,kok2,kok;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
	cin >> c;
	cout << endl;
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		kok1 = (-b + sqrt(delta)) / 2 * a;
		kok2= (-b - sqrt(delta)) / 2 * a;
		cout << "kok1:" << kok1 << endl;
		cout << "kok2:" << kok2 << endl;

	}
	if (delta == 0)
	{
		cout << "denklemin sadece bir koku vardir...."<<endl;
		kok = (-b + sqrt(delta)) / 2 * a;
		cout << "kok:" << kok << endl;


	}
	if (delta < 0)
	{
		cout << "kok yoktur...";
	}
	
}
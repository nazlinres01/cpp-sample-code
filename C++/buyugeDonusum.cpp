#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int MAX=50;
	char kelime[MAX];
	string kelime2="";
	int i;
	cout << "bir kelime giriniz lutfen..." << endl;
	cin >> kelime2;
	for (i = 0;i < kelime2.length();i++)
	    kelime[i]=toupper(kelime2[i]);
		kelime[i] = NULL;
	    cout << kelime;
}
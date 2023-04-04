#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int MAX = 2;
	char kelime[MAX];
	string kelime2 = "";
	int i;
	cout << "bir kelime giriniz..." << endl;
	getline(cin, kelime2);
	for (i = 0;i < kelime2.length();i++)
		kelime[i] = tolower(kelime2[i]);
		kelime[i] = NULL;
	    cout << kelime;


}
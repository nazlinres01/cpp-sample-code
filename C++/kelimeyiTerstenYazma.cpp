#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (true)
	{
		string kelime;
		cout << "Lutfen kelime giriniz:";
		getline(cin, kelime);

		for (int i = kelime.length() - 1;i >= 0;i--)
		{
			cout << kelime[i];
		}
		cout << endl;
	}

}
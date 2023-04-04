#include<iostream>
using namespace std;

void swapDeger(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swapAdres(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int sayi1 = 150;
	int sayi2 = 300;
	int a = 12;
	int* p = &a;
	cout << "p:" << p << endl;
	cout << "&a:" << &a << endl;
	cout << "*p:" << *p << endl;
	cout << "a:" << a << endl;
	cout << "&p:" << &p << endl;

	*p = 500;
	cout << "----------degisimden sonraki durum-----------" << endl;
	cout << "p:" << p << endl;
	cout << "&a:" << &a << endl;
	cout << "*p:" << *p << endl;
	cout << "a:" << a << endl;
	cout << "&p:" << &p << endl;

	cout << "------------swap islemi------------" << endl;
	cout << "swap deger"<<endl;
	swapDeger(sayi1, sayi2);
	cout << "sayi1:" << sayi1 << endl;
	cout << "sayi2:" << sayi2 << endl;
	cout << "swap adres" << endl;
	swapAdres(&sayi1, &sayi2);
	cout << "sayi1:" << sayi1 << endl;
	cout << "sayi2:" << sayi2 << endl;

}

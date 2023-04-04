#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main() {
    static const string karakterListesi = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(NULL));
    string rastgeleHarflerSayilar = "";

    for (int i = 0; i < 16; i++) {
        rastgeleHarflerSayilar += karakterListesi[rand() % karakterListesi.size()];
    }

    cout << "Rastgele Sayi: " << rastgeleHarflerSayilar << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    cout << "Program Menghitung Luas Persegi  Panjang" << endl;
    int p,l,luas;

    cout << "Masukan panjang : "; cin >>p;
    cout << "Masukan lebar : "; cin >>l;

    luas=p*l;
    cout << "maka luas dari persegi panjang dengan panjang " <<p<< "dan lebar" <<l<< "adalah";
    cout << luas  <<endl;
    return 0;
}

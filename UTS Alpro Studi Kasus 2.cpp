#include<iostream>
using namespace std;
int main()
{
    int tinggi, spasiAwal = 10;

    // Menginput tinggi segitiga
    cout << " Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++)
    {
        // Menampilkan bintang dan spasi antar bintang
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl; // Pindah ke baris berikutnya
    }

return 0;
}


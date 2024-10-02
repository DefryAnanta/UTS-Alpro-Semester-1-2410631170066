#include<iostream>
using namespace std;
int main(){
int batas, jumlahGanjil = 0, jumlahGenap = 0;

    cout << " Masukkan angka batas: ";
    cin >> batas;

    // Menampilkan bilangan ganjil
    cout << "\n Bilangan Ganjil:\n";
    for (int i=1; i<=batas; i++)
    {
        if (i % 2 != 0)
        {  // Jika bilangan ganjil tidak habis dibagi 2 atau sisa dibagi 2 adalah tidak sama dengan 0
            jumlahGanjil++;
            cout <<"    "<< i << endl;
        }
    }

    // Menampilkan bilangan genap
    cout << "\n Bilangan Genap:\n";
    for (int i=0; i<=batas; i++)
    {
        if (i % 2 == 0)
        {  // Jika bilangan genap habis dibagi 2 atau sisa jika dibagi 2 adalah 0
            jumlahGenap++;
            cout <<"    "<< i <<endl;
        }
    }

    return 0;
}

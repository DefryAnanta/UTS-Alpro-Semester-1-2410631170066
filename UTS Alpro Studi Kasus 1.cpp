#include<iostream>
using namespace std;
int main(){

    string nama;
    char ulang;
    int nAbsen, nTugas, nUts, nUas, nAkhir;
    int nAbsenn, nTugass, nUtss, nUass, nAkhirr;
    cout<<"----Program Menghitung Nilai Akhir Mahasiswa----"<<endl<<endl;

 do{
    cout<<"Masukkan Nama: ";
    getline(cin, nama);
    cout<<"Masukkan Nilai Absen: ";
    cin>>nAbsen;
    cout<<"Masukkan Nilai Tugas: ";
    cin>>nTugas;
    cout<<"Masukkan Nilai UTS: ";
    cin>>nUts;
    cout<<"Masukkan Nilai UAS: ";
    cin>>nUas;
    cout<<endl;

    //Operasi
    nAbsenn=nAbsen*10/100;
    nTugass=nTugas*20/100;
    nUtss=nUts*30/100;
    nUass=nUas*40/100;
    nAkhir=(nAbsen+nTugas+nUts+nUas)/4;

    cout<<"Nama: "<<nama<<endl;
    cout<<"Nilai Absen: "<<nAbsen<<endl;
    cout<<"Nilai Tugas: "<<nTugas<<endl;
    cout<<"Nilai UTS: "<<nUts<<endl;
    cout<<"Nilai UAS: "<<nUas<<endl;
    cout<<"Nilai Akhir: "<<nAkhir<<endl;
    cout<<"Huruf Mutu: ";


    if(nAkhir>=85 && nAkhir<=100){
        cout<<"A"<<endl<<endl;
    }
    else if(nAkhir>=80 && nAkhir<85){
        cout<<"B"<<endl<<endl;
    }
    else if(nAkhir>=75 && nAkhir<80){
        cout<<"C"<<endl<<endl;
    }
    else if(nAkhir>=70 && nAkhir<75){
        cout<<"D"<<endl<<endl;
    }
    else if(nAkhir<70){
        cout<<"E"<<endl<<endl;
    }

    cout << "\nApakah Anda ingin menghitung nilai lagi? (y/n): ";
    cin >> ulang;

    cout << endl;
 } while (ulang == 'y' || ulang == 'Y');



    return 0;
}


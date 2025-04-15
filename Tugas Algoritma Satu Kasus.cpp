#include<iostream>
using namespace std;

int main() {
    int umur;
    
    cout << "Masukkan Umur Anda: ";
    cin >> umur;
    
    if (umur < 18) {// Memeriksa umur dibawah 18 tahun dahulu
    cout << "Maaf, Umur Anda Dibawah Standar Perusahaan Kami." << endl;
    } else if (umur < 60) { // Memeriksa apakah umur kurang dari 60 tahun 
        cout << "Selamat, Anda Diterima di Sektor Pekerjaan Berat!" << endl;
    } else {
        cout << "Selamat, Anda Diterima di Sektor Pekerjaan Ringan." << endl;
    }
    

    return 0;
}
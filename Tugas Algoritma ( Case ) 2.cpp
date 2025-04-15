#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pilihan;
    float panjang, lebar, hasil;

    cout << "Menu Rumus Persegi Panjang" << endl;
    cout << "1. Hitung Luas (Rumus: panjang × lebar)" << endl;
    cout << "2. Hitung Keliling (Rumus: 2 × (panjang + lebar))" << endl;
    cout << "3. Hitung Panjang Diagonal (Rumus: (panjang² + lebar²))" << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    // Validasi pilihan
    if (pilihan >= 1 && pilihan <= 3) {
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
    }

    switch(pilihan) {
        case 1:
            cout << "Rumus Luas = panjang × lebar" << endl;
            hasil = panjang * lebar;
            cout << "Luas Persegi Panjang: " << hasil << endl;
            break;
        case 2:
            cout << "Rumus Keliling = 2 × (panjang + lebar)" << endl;
            hasil = 2 * (panjang + lebar);
            cout << "Keliling Persegi Panjang: " << hasil << endl;
            break;
        case 3:
            cout << "Rumus Diagonal = (panjang² + lebar²)" << endl;
            hasil = sqrt(panjang * panjang + lebar * lebar);
            cout << "Panjang Diagonal Persegi Panjang: " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
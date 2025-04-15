#include <iostream>
using namespace std;

int main() {
    string bulan[12] = {
        "Januari", "Februari", "Maret", "April","Mei", "Juni", "Juli", "Agustus",
        "September", "Oktober", "November", "Desember"
    };

    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka >= 1 && angka <= 12) {
        cout << "Bulan: " << bulan[angka - 1] << endl;
    } else {
        cout << "Angka tidak valid" << endl;
    }

    return 0;
}
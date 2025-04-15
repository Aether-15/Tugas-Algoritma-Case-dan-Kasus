#include <iostream>

using namespace std;

int main() {
    // Konstanta jumlah hari aktif dalam 3 bulan
    const int TOTAL_HARI = 60;
    
    // Variabel input jumlah kehadiran mahasiswa
    int hadir, izin, sakit, alpa;
    double total_poin, persentase;

    // Input jumlah masing-masing jenis kehadiran
    cout << "Input Jumlah Hadir: ";
    cin >> hadir;
    cout << "Input Jumlah Izin: ";
    cin >> izin;
    cout << "Input Jumlah Sakit: ";
    cin >> sakit;
    cout << "Input Jumlah Alpa: ";
    cin >> alpa;

    // Validasi apakah jumlah total hari yang dimasukkan sesuai dengan TOTAL_HARI
    if (hadir + izin + sakit + alpa != TOTAL_HARI) {
        cout << "Error: Jumlah hari tidak sesuai dengan " << TOTAL_HARI << " hari pembelajaran." << endl;
    } else {
        // Menghitung total poin berdasarkan aturan
        total_poin = (hadir * 1.0) + (izin * 0.75) + (sakit * 0.5) + (alpa * 0.0);

        // Menghitung persentase kehadiran
        persentase = (total_poin / TOTAL_HARI) * 100;

        // Menampilkan hasil berdasarkan kategori kehadiran
        cout << "Persentase Kehadiran: " << persentase << "%" << endl;

        // Kasus 1: Kehadiran Baik (≥ 85%)
        if (persentase >= 85) {
            cout << "Status: Kehadiran Baik" << endl;
        }
        // Kasus 2: Kehadiran Sedang (≥ 70% dan < 85%)
        else if (persentase >= 70) {
            cout << "Status: Kehadiran Sedang" << endl;
        }
        // Kasus 3: Kehadiran Buruk (< 70%)
        else {
            cout << "Status: Kehadiran Buruk, Harap tingkatkan kehadiran!" << endl;
        }
    }

    return 0;
}
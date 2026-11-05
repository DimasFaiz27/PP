#include <iostream>
using namespace std;

string buku[5] = {
    "Algoritma Pemrograman",
    "Dasar-Dasar C++",
    "Matematika Diskrit",
    "Struktur Data",
    "Pengantar Ilmu Komputer"
};

int tersedia[5] = {1, 1, 1, 1, 1};

int tampilkanBuku() {
    cout << "\n=== DAFTAR BUKU ===\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << buku[i];

        if (tersedia[i] == 1)
            cout << " (Tersedia)\n";
        else
            cout << " (Dipinjam)\n";
    }

    return 0;
}
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

int pinjamBuku() {
    int nomor;

    tampilkanBuku();

    cout << "\nPilih nomor buku: ";
    cin >> nomor;

    if (nomor < 1 || nomor > 5) {
        cout << "Nomor tidak valid!\n";
    }
    else if (tersedia[nomor - 1] == 1) {
        tersedia[nomor - 1] = 0;
        cout << "Buku berhasil dipinjam!\n";
    }
    else {
        cout << "Buku sedang dipinjam!\n";
    }

    return 0;
}

int kembalikanBuku() {
    int nomor;

    tampilkanBuku();

    cout << "\nPilih nomor buku: ";
    cin >> nomor;

    if (nomor < 1 || nomor > 5) {
        cout << "Nomor tidak valid!\n";
    }
    else if (tersedia[nomor - 1] == 0) {
        tersedia[nomor - 1] = 1;
        cout << "Buku berhasil dikembalikan!\n";
    }
    else {
        cout << "Buku belum dipinjam!\n";
    }

    return 0;
}

int main() {
    int pilihan;

    do {
        cout << "\n=== SISTEM PEMINJAMAN BUKU ===\n";
        cout << "1. Lihat Daftar Buku\n";
        cout << "2. Pinjam Buku\n";
        cout << "3. Kembalikan Buku\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            tampilkanBuku();
        }
        else if (pilihan == 2) {
            pinjamBuku();
        }
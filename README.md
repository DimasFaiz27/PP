# 📚 Sistem Peminjaman Buku
Anggota Kelompok:

1. Hadad Nizammudin – 2617051039 ⭐
2. Zahra Dhita Rahmadani – 2617051007
3. Rizal Muhamad Rizky – 2617051011
4. Dimas Faiz Lintang Kusuma – 2617051017
5. Vincentius Evelyn Dovan Tampubolon – 2617051026
6. Sherline Ting – 2617051046

## 📌 Deskripsi

Sistem Peminjaman Buku merupakan mini project yang dibuat untuk memenuhi tugas mata kuliah **Pengenalan Pemrograman**. Program ini dibuat menggunakan bahasa pemrograman **C++** dan bertujuan untuk menerapkan konsep dasar pemrograman yang telah dipelajari.

Program ini memungkinkan pengguna untuk melihat daftar buku, meminjam buku, mengembalikan buku, serta melihat status ketersediaan setiap buku.

---

## 📖 Latar Belakang

Perpustakaan merupakan salah satu tempat yang menyediakan berbagai sumber informasi dan pengetahuan dalam bentuk buku. Dalam proses peminjaman buku, diperlukan suatu sistem yang dapat membantu mencatat status buku sehingga dapat diketahui buku mana yang masih tersedia dan buku mana yang sedang dipinjam.

Pada proses pencatatan yang dilakukan secara sederhana, terdapat kemungkinan terjadinya kesalahan dalam mengetahui status buku. Oleh karena itu, dibuatlah **Sistem Peminjaman Buku** sebagai sebuah program sederhana yang dapat membantu mengelola data peminjaman buku.

Mini project ini dibuat sebagai penerapan materi dasar pemrograman C++, khususnya penggunaan **array, fungsi, percabangan, perulangan, dan input/output**. Program dibuat dalam bentuk sistem berbasis menu sehingga pengguna dapat memilih operasi yang ingin dilakukan.

---

## 🎯 Tujuan

Tujuan dari pembuatan mini project ini adalah:

1. Menerapkan konsep dasar pemrograman menggunakan bahasa C++.
2. Memahami penggunaan array dalam menyimpan data buku.
3. Memahami penggunaan fungsi untuk membagi program menjadi beberapa bagian.
4. Menerapkan percabangan `if-else` dalam menentukan kondisi buku.
5. Menerapkan perulangan `do-while` dan `for`.
6. Membuat program sederhana yang dapat digunakan untuk mengelola proses peminjaman dan pengembalian buku.

---

## ⚙️ Fitur Program

Program ini memiliki beberapa fitur utama, yaitu:

### 1. Lihat Daftar Buku
Menampilkan seluruh daftar buku yang tersedia beserta statusnya.

Status buku terdiri dari:
- **Tersedia**
- **Dipinjam**

### 2. Pinjam Buku
Pengguna dapat memilih nomor buku yang ingin dipinjam.

Jika buku masih tersedia, status buku akan berubah menjadi **Dipinjam**.

### 3. Kembalikan Buku
Pengguna dapat memilih buku yang ingin dikembalikan.

Jika buku sedang dipinjam, statusnya akan berubah kembali menjadi **Tersedia**.

### 4. Keluar
Pengguna dapat keluar dari program melalui menu keluar.

---

## 🧩 Konsep Pemrograman yang Digunakan

Dalam pembuatan program ini digunakan beberapa konsep dasar pemrograman C++, yaitu:

### Array

Array digunakan untuk menyimpan daftar nama buku dan status ketersediaannya.

```cpp
string buku[5] = {
    "Algoritma Pemrograman",
    "Dasar-Dasar C++",
    "Matematika Diskrit",
    "Struktur Data",
    "Pengantar Ilmu Komputer"
};

int tersedia[5] = {1, 1, 1, 1, 1};

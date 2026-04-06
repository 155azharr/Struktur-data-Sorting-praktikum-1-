demo online : http://shorting.intidatamedia.id


# 📊 Sorting Algorithms Demo (Python)

Proyek ini adalah implementasi modular dari berbagai algoritma pengurutan (_sorting_) menggunakan bahasa pemrograman Python. Program ini menerima input dinamis dari pengguna dan menampilkan proses pengurutan data baris demi baris pada setiap iterasinya.

## ✨ Fitur

- **Input Dinamis**: Pengguna dapat menentukan jumlah data dan memasukkan datanya sendiri.
- **Visualisasi Iteratif**: Menampilkan perubahan posisi array pada setiap langkah iterasi.
- **Struktur Modular**: Kode dipisah berdasarkan algoritma masing-masing agar rapi, mudah dibaca, dan dikembangkan (Best Practice).
- **Type Hinting**: Menggunakan standar Python modern untuk keamanan tipe data.

## 🧮 Algoritma yang Tersedia

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**
4. **Quick Sort**
5. **Merge Sort**

## 📂 Struktur Direktori

```text
Tugas_Sorting_Python/
│
├── main.py                     # Program utama aplikasi
├── README.md                   # Dokumentasi proyek
├── utils/
│   ├── __init__.py
│   └── display.py              # Fungsi helper untuk print ke terminal
│
└── sortings/                   # Kumpulan algoritma sorting
    ├── __init__.py
    ├── bubble_sort.py
    ├── selection_sort.py
    ├── insertion_sort.py
    ├── quick_sort.py
    └── merge_sort.py
```

#DOCUMENTASI UNTUK PROGRAM C++

# 📌 Program Sorting Algoritma (C++)

## 👤 Identitas

- Nama: Muhammad Akmaludin Azhar
- Mata Kuliah: Struktur Data
- Bahasa: C++

---

## 📖 Deskripsi Program

Program ini dibuat untuk mengimplementasikan berbagai algoritma sorting (pengurutan data) menggunakan bahasa pemrograman C++.

User dapat memasukkan sejumlah data, kemudian memilih metode sorting yang diinginkan. Program akan menampilkan proses setiap iterasi hingga data terurut.

---

## 🎯 Tujuan

- Memahami konsep dasar algoritma sorting
- Membandingkan cara kerja beberapa metode sorting
- Menampilkan proses iterasi dari setiap algoritma

---

## ⚙️ Algoritma yang Digunakan

1. **Bubble Sort**
   Membandingkan elemen bersebelahan dan menukar jika tidak sesuai urutan.

2. **Selection Sort**
   Mencari nilai terkecil lalu menempatkannya di posisi awal.

3. **Insertion Sort**
   Menyisipkan elemen ke posisi yang sesuai dalam array.

4. **Quick Sort**
   Menggunakan metode divide and conquer dengan pivot.

5. **Merge Sort**
   Membagi array menjadi bagian kecil lalu menggabungkannya kembali secara terurut.

---

## ▶️ Cara Menjalankan Program

### 1. Compile Program

```bash
g++ sorting_app.cpp -o sorting_app
```

### 2. Jalankan Program

```bash
./sorting_app
```

---

## 🧪 Contoh Input

```
Masukkan jumlah data: 5
Masukkan data: 10 11 30 1 5
```

---

## 📊 Contoh Output

```
--- Proses Bubble Sort ---
Iterasi 1: 10 11 1 5 30
Iterasi 2: 10 1 5 11 30
Iterasi 3: 1 5 10 11 30
```

Hasil akhir:

```
1 5 10 11 30
```

---

## ✨ Fitur Program

- Input jumlah data dan nilai
- Menu interaktif pemilihan algoritma
- Menampilkan proses setiap iterasi
- Menampilkan hasil akhir sorting

---

## ⚠️ Catatan

- Data tidak otomatis di-reset setelah sorting
- Setiap metode menggunakan data hasil sebelumnya

---

## 🚀 Pengembangan Selanjutnya

- Menambahkan tampilan GUI
- Menampilkan waktu eksekusi tiap algoritma
- Menambahkan visualisasi sorting
- Reset data otomatis

---

## 📌 Kesimpulan

Program ini berhasil mengimplementasikan berbagai algoritma sorting dan menunjukkan proses pengurutan secara bertahap. Setiap algoritma memiliki cara kerja yang berbeda namun menghasilkan output yang sama yaitu data terurut.

---

## 🙏 Penutup

Program ini dibuat untuk memenuhi tugas mata kuliah Struktur Data serta sebagai sarana pembelajaran algoritma sorting.

---

//Buatlah program C++ dengan class Barang yang memiliki atribut namaBarang dan kodeBarang.
// serta memiliki fungsi menampilkan informasi barang.



#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Deklarasi constructor berparameter
    Barang(string nama, string kode);
    
    // Fungsi untuk menampilkan informasi barang
    void cetak();
};

// Implementasi constructor menggunakan scope resolution
Barang::Barang(string nama, string kode) {
    namaBarang = nama;
    kodeBarang = kode;
}

// Implementasi fungsi cetak menggunakan scope resolution
void Barang::cetak() {
    cout << "Informasi Barang:" << endl;
    cout << "Nama Barang: " << namaBarang << endl;
    cout << "Kode Barang: " << kodeBarang << endl;
}

int main() {
    // Membuat objek barang menggunakan constructor berparameter
    Barang barang1("Laptop Acer ", "AC123");
    Barang barang2("Vivo Y21", "HP456");

    // Menampilkan informasi barang
    barang1.cetak();
    cout << endl; // Spasi antara output
    barang2.cetak();

    return 0;
}
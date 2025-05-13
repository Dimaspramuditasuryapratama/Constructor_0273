#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(); // Constructor
};

mahasiswa::mahasiswa(){
    cout << "Constructor Terpanggil"<<endl; // definisi constructor
}

int main(){
    mahasiswa mhs; // Pembuaan object

    return 0;
}
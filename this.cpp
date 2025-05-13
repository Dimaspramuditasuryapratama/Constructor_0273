#include <iostream>
using namespace std;
class buku{
    string judul;
    public:
    string setget(string judul){
        this->judul = judul;    //nilai parameter 'judul' untuk memberi variabel 'judul'
        return this->judul;     //return nilai variabel judul.
    }
};
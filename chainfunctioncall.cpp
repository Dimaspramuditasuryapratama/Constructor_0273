#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku setJudul(string judul){
        this->judul = judul;
        return *this; // Mengembalikan objek saat ini / chain function
    }
    string getJudul(){
        return this->judul; // Mengembalikan nilai judul / chain function
    }
};

int main(){
    buku bukunya;
    cout<<bukunya.setJudul("Matematika").getJudul();    //chain function
    return 0;
}
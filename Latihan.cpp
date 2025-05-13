#include <iostream>
using namespace std;

class bangunDatar{
    public:
    int hitungLuas(int l, int p);
    int hitungKeliling(int l, int p);
};

class persegiPanjang{
    public:
    int panjang, lebar;

    friend int bangunDatar::hitungLuas(int l, int p);
    friend int bangunDatar::hitungKeliling(int l, int p);
};

int bangunDatar::hitungLuas(int l, int p){
    return l * p;
}

int bangunDatar::hitungKeliling(int l, int p){
    return (2 * l) + (2 * p);
}

int main(){
    bangunDatar bD;
    persegiPanjang pP;
    persegiPanjang &refpP = pP;
    refpP.panjang = 10;
    refpP.lebar = 100;
    cout << bD.hitungLuas(refpP.lebar, refpP.panjang);
}
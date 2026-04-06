#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
    
};
struct mahasiswa
{
    string nama;
    AlamatDetail alamat;
    int umur;
};
int main(){
        // deklarasi variable struct
    mahasiswa mhs;

    // mengisi data
    cout << "Isikan data nama : ";
    getline(cin, mhs.nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Isikan data kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Isikan data usia : ";
    cin >> mhs.umur;
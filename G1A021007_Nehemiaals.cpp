#include <iostream>

using namespace std;

//komponen
struct Mahasiswa{
 string nama, fakultas, jurusan;
 Mahasiswa *next;

};

int main (){

   Mahasiswa *node1, *node2, *node3;

    node1 = new Mahasiswa();
    node2 = new Mahasiswa();
    node3 = new Mahasiswa();
    
    node1->nama = "Nehemia";
    node1->fakultas = "teknik";
    node1->jurusan = "Informatika";
    node1->next = node2;

    node2->nama = "Jono";
    node2->fakultas = "teknik";
    node2->jurusan = "Sipil";
    node2->next = node3;

    node3->nama = "Yuni";
    node3->fakultas = "teknik";
    node3->jurusan = "Arsitektur";
    node3->next = NULL;

    Mahasiswa *cur;
    cur = node1;
    while( cur != NULL ) {
        cout << "Nama Mahasiswa :" << cur->nama << endl;
        cout << "Fakultas Mahasiswa :" << cur->fakultas << endl;
        cout << "Jurusan Mahasiswa  :" << cur->jurusan << endl;

        cur = cur->next;

    }


}

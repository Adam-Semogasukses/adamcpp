#include <iostream>
using namespace std;

int main () {
    string name;
    
    cout<<"Masukan Nama: ";
    getline(cin, name);

    if (name.emptly() > 12){
        cout<<"Nama tidak boleh kosong";
    } else {
        cout<<"Selamat Datang "<<name;
    }

    return 0;
}
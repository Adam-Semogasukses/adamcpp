#include <iostream>
using namespace std;

int main() {

    double temp;
    char unit;

    cout<<"F = Faranheit"<<endl;
    cout<<"C = Celcius"<<endl;
    cout<<"Masukan satuan suhu yang akan di konversi ( C / F ) : ";
    cin>>unit;

    if(unit == 'F' || unit == 'f') {
        cout<<"Masukan suhu dalam satuan Celcius : ";
        cin>>temp;

        temp = (1.8 * temp) + 32.0;
        cout<< "Temprature is " << temp <<"F";

    } else if (unit == 'C' || unit == 'c' ) {
        cout<<"Masukan suhu dalam satuan Farenheit : ";
        cin>>temp;

        temp = (temp - 32) / 1.8;
        cout<< "Temprature is " << temp <<"F";
    } else {
        cout<<"Masukan satuan suhu yang benar ( C / F )"<< endl;
    }
     return 0;
}
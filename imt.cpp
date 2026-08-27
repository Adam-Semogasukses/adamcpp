#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    float berat;
    float tinggi;

    cout<<"Masukan berat badan(kg): ";
    cin>>berat;

    cout<<"Masukan tinggi badan(cm): ";
    cin>>tinggi;

    float tinggi_meter = tinggi / 100.0;
    float imt = berat / pow(tinggi_meter, 2);
    cout<<fixed<<setprecision(1)<<imt<<endl;

    if(imt <= 18.5){
        cout<<"kurang"<<endl;
    }
    else if (imt < 25.0){
        cout<<"normal"<<endl;
    }
    else if (imt < 30.0){
        cout<<"berlebih"<<endl;
    }
    else {
        cout<<"obesitas"<<endl;
    }



    return 0;
}
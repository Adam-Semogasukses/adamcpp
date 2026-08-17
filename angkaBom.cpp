#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) +1;

    do{
        cout<<"Tebak angka antara 1-100: ";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"Terlalu Besar"<<endl;
        } else if(guess<num) {
            cout<<"Terlalu Kecil"<<endl;
        }
        else {
            cout<<"BOOM!! Kamu menebak angka bom!"<<endl;
            cout<<"Dalam " << tries << " kali percobaan!";

        }

    }while (guess != num);

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main () {

    double balance = 19000000;
    int choice = 0;

    do{
        cout<<"======Program Bank Kopdes======"<<endl;        
        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"==============================="<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                    showBalance(balance);                    
                break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                break;
            case 4: cout<<"==============================="<<endl;
                break;
            default: cout<<"invalid choice"<<endl;
        }
    }while(choice != 4);

    return 0;
}

void showBalance (double balance){
    cout<<"Your balance is: Rp "<<setprecision(2)<<fixed<<balance<<endl;
}
double deposit(){

    double amount = 0;
    cout<<"enter amount to deposit: ";
    cin>>amount;

    if(amount>=0){
        return amount;
    } else{
        cout<<"That's not a valid amount"<<endl;
        return 0;
    }

    return amount;
}
double withdraw(double balance){

    double amount = 0;
    cout<<"Enter amount to be withdrawn: ";
    cin>>amount;

    if(amount>balance){
        cout<<"insufficient funds"<<endl;
        return 0;
    }

    return amount;
}
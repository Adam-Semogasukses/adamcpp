#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main () {
    char player;
    char computer;

    player = getUserChoice();
    cout<<"Pilihan anda: ";
    showChoice(player);

    computer = getComputerChoice();
    cout<<"Pilihan komputer: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    cout<<"Gunting - Batu - Kertas"<<endl;

    do{
        cout<<"g = gunting"<<endl;
        cout<<"b = batu"<<endl;
        cout<<"k = kertas"<<endl;
        cout<<"Masukan Pilihan anda: ";
        cin>>player;
    }while(player != 'g' && player != 'b' && player != 'k');

    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() %3 +1;

    switch(num){
            case 1: return 'g';
            case 2: return 'b';
            case 3: return 'k';
    }

    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'g':cout<<"gunting"<<endl;
            break;
        case 'b':cout<<"batu"<<endl;
            break;
        case 'k':cout<<"kertas"<<endl;
            break;
        default: cout<<"Pilihan anda tidak valild"<<endl;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'g': if(computer == 'g'){
                    cout<<"Seri"<<endl;
                } else if (computer == 'b'){
                    cout<<"Kamu kalah"<<endl;
                } else {
                     cout<<"Kamu menang!"<<endl;
                }
                break;
        case 'b': if(computer == 'b'){
                    cout<<"Seri"<<endl;
                } else if (computer == 'k'){
                    cout<<"Kamu kalah"<<endl;
                } else {
                     cout<<"Kamu menang!"<<endl;
                }
                break;
        case 'k': if(computer == 'k'){
                    cout<<"Seri"<<endl;
                } else if (computer == 'g'){
                    cout<<"Kamu kalah"<<endl;
                } else {
                     cout<<"Kamu menang!"<<endl;
                }
                break;
    }
}
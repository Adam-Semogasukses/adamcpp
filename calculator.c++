#include <iostream>

int main() {

    char op;
    double num1;
    double num2;    
    double result;
    
    std::cout<< "KALKULATOR C++" << std::endl;

    std::cout<< "Masukan operasi matematika ( + - * / ) :";
    std::cin>>op;

        std::cout<<"Angka Pertama: ";
        std::cin>>num1;

        std::cout<<"Angka Kedua: ";
        std::cin>>num2;

        switch(op) {
            case '+':
                result = num1 + num2;
                std::cout<< "Hasil: " << result << std::endl;
                break;
            case '-':
                result = num1 - num2;
                std::cout<<"Hasil: " <<result<< std::endl;
                break;
            case '*':
                result = num1 * num2;
                std::cout<<"Hasil: " <<result<< std::endl;
                break;
            case '/':
                result = num1 / num2;
                std::cout<<"Hasil: " <<result<< std::endl;
                break;
            default:
                std::cout<<"that wasn't a valid response"<<std::endl;
        }

    return 0;
}
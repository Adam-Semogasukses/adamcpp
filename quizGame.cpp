#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string questions[] =   {"1. What year was c++ created? ",
                            "2. Who invented c++? ",
                            "3. What is the predecessor of c++? ",
                            "4. Is the earth flat? "};

    string option[][4] =    {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                            {"A. C", "B. C+", "C. C--", "D. B++"},
                            {"A. Yes", "B. No", "C. Sometimes", "D. What's earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        cout << "===================================="<<endl;
        cout << questions[i]<<endl;
        cout << "===================================="<<endl;

        for(int j = 0; j < sizeof(option[i])/sizeof(option[i][0]); j++){
            cout << option[i][j] << endl;
        }
        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout<< "CORRECT" << endl;
            score++;
        }
        else {
            cout << "WRONG" << endl;
            cout << "Answer: " << answerKey[i] << endl;
        }
    }

    cout << "====================================" << endl;
    cout << "YOUR SCORE IS: " << score;
    cout << "====================================" << endl;

    return 0;
}
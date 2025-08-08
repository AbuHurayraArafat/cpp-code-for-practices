#include<iostream>
using namespace std;

int main (){

    int number1 , number2 ;

    cout << "What is your First Number  :";
    cin >> number1 ; 

    cout << endl;

    cout << "What is your Second Number :";
    cin >> number2;

    cout << endl<<endl;

    int  addition = number1+number2;
    int  abstraction = number1-number2;
    int  multiplication = number1*number2;
    float division = (float)number1/number2;

    cout << "The Addition is = " << addition << endl;
    cout << "The Abstraction is = " << abstraction << endl;
    cout << "The Multiplication is = " << multiplication << endl ;
    cout << "The Division is = " << division << endl ;
    
    return 0;
}

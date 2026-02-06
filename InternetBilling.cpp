#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main(){
    char plan;
    double hours;
    double totalBill;

    cout << "please choose if you are subcribed to package a, b, or c: ";
    cin >> plan;
    plan = tolower(plan);   
    cout << "please enter how many hours you have used the internet so far this month:  " << endl;
    cin >> hours;

    if ((plan != 'a' && plan != 'b' && plan != 'c') || (hours < 0 || hours > 744)){
        cout << "you have entered an incorrect input. terminating program.";
        return 0;
    }
    else if (plan == 'a'){
        cout << "you have selected package a." << endl;
        if (hours < 11){
            cout << "you have not surpassed your monthly provided hours." << endl;
            totalBill = 9.95;
        } else {
            totalBill = 9.95 + (hours - 10) * 2.00; 
        }
    }
    else if (plan == 'b'){
        cout << "you have selected package b." << endl;
        if (hours < 21){
            cout << "you have not surpassed your monthly provided hours." << endl;
            totalBill = 14.95;
        } else {
            totalBill = 14.95 + (hours - 20) * 1.00; 
        }
    }
    else if (plan == 'c'){
        cout << "you have selected package c." << endl;
        totalBill = 19.95;
    }

    cout << fixed << setprecision(2);
    cout << "your total bill is $" << totalBill << endl;
    cout << "thank you for your business :D" << endl;

    return 0;
}
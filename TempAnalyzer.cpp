#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream tempAnalyz;
    tempAnalyz.open("temperatures.txt");

    double temp;
    int days = 0;
    double total = 0;
    double average;

    cout << "welcome to temp analyzer!\n";
    cout << "--------------------------------------\n";

    while (tempAnalyz >> temp){
        days++;
        total += temp;
    }

    tempAnalyz.close();
    
    average = total / days;

    cout << "temperature was analyzed over " << days << " days...\n";
    cout << "the average temperature was " << average << "!!!\n";
    cout << "--------------------------------------\n";
    cout << "thank you :D\n";

    return 0;
}
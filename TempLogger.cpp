#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int days;

    ofstream tempLog;
    tempLog.open("temperatures.txt");

    cout << "welcome to temp logger!\n";
    cout << "for how many days would you like to record temperature?\n";
    cin >> days;

    for (int i = 1; i <= days; i++){
            double tmptr;
            cout << "please enter the temperature for day " << i << ":  ";
            cin >> tmptr;
            tempLog << tmptr << endl;
    }

    tempLog.close();
    cout << "temperatures logged. thank you!\n";

    return 0;
}
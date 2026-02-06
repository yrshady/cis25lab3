#include <iostream>
using namespace std;

int main(){
    
    int sum = 0;
    int add;

    cout << "welcome to the sum of numbers!\n";
    cout << "enter a positive number to add to the sum, or a negative number to exit:  ";
    cin >> add;

    while (add >= 0){
        sum += add;
        cout << "enter a positive number to add to the sum, or a negative number to exit:  ";
        cin >> add;
    }

    cout << "your total sum is... \n";
    cout << sum << "!\n";
    cout << "thank you :D";

    return 0;
}
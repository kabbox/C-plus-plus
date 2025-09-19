#include <iostream>
using namespace std;

int main() {
    cout << "Simple Calculator" << endl;
    cout << "Enter First Number: ";
    int num1, num2;
    cin >> num1;
    cout << "\nEnter Second Number: ";
    cin >> num2;
    cout << "\nEnter the Operator (+, -, *, /, %): ";
    char ch;
    cin >> ch;

    switch(ch){
        case '+': {
            int sum = num1 + num2;
            cout << "Sum: " << sum << endl;
            break;
        }
        case '-': {
            int sub = num1 - num2;
            cout << "Subtraction: " << sub << endl;
            break;
        }
        case '*': {
            int product = num1 * num2;
            cout << "Product: " << product << endl;
            break;
        }
        case '/': {
            float quotient = (float)num1 / num2;
            cout << "Quotient: " << quotient << endl;
            break;
        }
        case '%': {
            int remainder = num1 % num2;
            cout << "Remainder: " << remainder << endl;
            break;
        }
        default:
            cout << "Wrong user input...:( Try Again!!!" << endl;
    }


    return 0;
}
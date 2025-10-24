#include <iostream>
using namespace std;

int main() {
    int num;
    cout<< "Check if your number is Even or ODD : ";
    cin >> num;
    if(num % 2 == 0){
        cout<<"Number Is Even"<<endl;

    }else {
        cout<<"Number is Odd";
    }
    return 0;
}
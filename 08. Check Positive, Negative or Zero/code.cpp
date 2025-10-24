#include <iostream>
using namespace std;

int main() {
    cout<< "Check if you number is \"Positive\", \"Negative\" or, \"Zero\" "<<endl;
    cout<< "Please Enter the Number: ";
    int num;
    cin>>num;

    if(num == 0){
        cout<<"Your number is only zero";
    }else if(num > 0){
        cout<<"Your Number is Positive ";
    }else if(num < 0){
        cout<<"Your Number is Negative";
    }else {
        cout<<"Wrong Input! Please try again.... :(";
    }
    
    return 0;
}
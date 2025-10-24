#include <iostream>
using namespace std;

int main() {
    cout<<"Simple Calculator"<<endl;
    int input, a, b;
    while(true){
        cout<<"1.Addition (+)\n2.Substraction (-)\n3.Product (*)\n4.Quotient (/)\n5.Remainder (%)\n6.Exit\nPlease input your desire number :  ";
        cin >> input;
        cout<< "Enter First Number : ";
        cin>>a;
        cout<< "Enter Second Number : ";
        cin>>b;
        

        if(input == 6){
            cout<<"Exiting the program...Thank You... :)";
            break;
        }else if(input == 1){
            int sum = a+b;
            cout<<"Your Sum Is : "<< sum<<endl;;
        }else if(input == 2){
            int sub = a-b;
            cout<<"Your Substraction Is : "<< sub<<endl;
        }else if(input == 3){
            int product = a*b;
            cout<<"Your Product Is : "<< product<<endl;
        }else if(input == 4){
            int quotient = a/b;
            cout<<"Your Quotient Is : "<< quotient<<endl;
        }else if(input == 5){
            int remainder = a%b;
            cout<<"Your Remainder Is : "<< remainder<<endl;
        }else {
            cout<<"Wrong user input!!! Please try again... :(";
        }
    }
    return 0;
}
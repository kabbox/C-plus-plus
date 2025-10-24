#include <iostream>
using namespace std;

int main() {
    cout << "Checking Maximum of 2 Numbers.."<<endl;
    int a,b,c;
    cout<< "Enter First Number(A) :";
    cin >> a;
    cout<< "Enter Second Number(B) :";
    cin >> b;
    cout<<"Enter Third Number(C) : ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"A is Greater";
        }else if(c>b){
            cout<<"C is Greater";
        }
    }else {
        cout<<"B is Greater";
    }
    return 0;
}
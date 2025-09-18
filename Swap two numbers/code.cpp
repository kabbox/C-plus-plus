#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout<< "Enter 2 Integers...Enter Number For a: ";
    cin >> a;
    cout<< "Enter Number for b: ";
    cin >> b;

    // Before Swapping
    cout<<"Before Swapping a= "<<a<<", b="<<b<<endl;
    
    int swap = a;
    a = b;
    b = swap;
    // After Swapping
    cout<< "After Swapping a= "<<a<<", b="<<b;
    
    return 0;
}
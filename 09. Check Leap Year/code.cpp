#include <iostream>
using namespace std;

int main() {
    cout<<"Check out \"year\" whether it is LEAP YEAR or NOT : ";
    int year;
    cin >> year;
    if(year / 4 == 0  && year % 100 != 0 || year % 400 == 0){
        cout<< "It's a Leap Year!";
    }else {
        cout<<"Not a Leap Year :(";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter your desire number to calculate... \n 1.Rectangle \n 2.Circle \n 3.Triangle \n"<<endl;
    int selectProgram;
    cin>>selectProgram;
    int base, height, rad;
    float pi = 3.14;

    switch(selectProgram){
        case 1: {
            cout<< "Enter The Base : ";
            cin >> base;
            cout << "Enter The Height : ";
            cin>> height;
            int area = base*height;
            cout<< "Your Area is : "<<area<<endl;
            break;
        }
        case 2: {
            cout<<"Enter the Radius";
            cin>>rad;
            float area = pi*(rad*rad);
            cout << "Your Circle Area Is : "<<area;
            break;
        }
        case 3: {
            cout<< "Enter the base : ";
            cin>>base;
            cout<< "Enter the height: ";
            cin>>height;
            float area = 0.5 * (base*height);
            cout<< "Your Triangle Area Is : "<<area;
            break;
        }

        default:
            cout<< "Wrong Input! Please Try Again... :)"<<endl;
         
    }

    return 0;
}

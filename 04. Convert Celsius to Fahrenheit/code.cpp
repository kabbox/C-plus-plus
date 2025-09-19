#include <iostream>
using namespace std;

int main() {
    cout<< "Convert \u00B0C to \u00B0F (Celsius To Fahrenheit) or, \u00B0F to \u00B0C (Fahrenheit to Celsius)"<<endl;
    cout<< "Type is desire number : "<<endl<<"1.Celsius To Fahrenheit"<<endl<<"2.Fahrenheit to Celsius"<<endl ;

    int num;
    cin>>num;
    int cels;
    int fahren;
    
    if(num == 1){
        cout<<"Please input Celsius : "<<endl;
        cin >>cels;
        float calcFahren = (cels * 1.8 ) + 32;
        cout<< "Your Celsius Conversion Is "<< calcFahren << "\u00B0F"<<endl;
    }else if(num ==2) {
        cout<< "Please input Fahrenheit : ";
        cin>>fahren;
        float calcCels = (fahren - 32) * 0.555;
        cout<< "Your Fahrenheit Conversion Is "<< calcCels << "\u00B0C"<<endl;
    }else {
        cout<<"Wrong Input....Please Try Again :)";
    }
    
    
    return 0;
}
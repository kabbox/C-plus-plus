#include <iostream>
using namespace std;

int main() {
    // For Storing The Size of Each Data Type
    int boolSize = sizeof(bool);
    int charSize = sizeof(char);
    int shortSize = sizeof(short);
    int intSize = sizeof(int);
    int longSize = sizeof(long);
    int floatSize = sizeof(float);
    int doubleSize = sizeof(double);

    // More Extra Data Type Sizes
    int longLongSize = sizeof(long long);
    int longDoubleSize = sizeof(long double);

    // For Printing The Size Of Each Data Type
    cout<<"Size of \"bool\" = "<< boolSize<<" byte"<<endl;
    cout<<"Size of \"char\" = "<< charSize<<" byte"<<endl;
    cout<<"Size of \"short\" = "<< shortSize<<" bytes"<<endl;
    cout<<"Size of \"int\" = "<< intSize<<" bytes"<<endl;
    cout<<"Size of \"long\" = "<< longSize<<" bytes"<<endl;
    cout<<"Size of \"double\" = "<< doubleSize<<" bytes"<<endl;

    cout<<"Size of \"long long\" = "<< longLongSize<<" bytes"<<endl;
    cout<<"Size of \"long double\" = "<< longDoubleSize<<" bytes"<<endl;
    return 0;
}
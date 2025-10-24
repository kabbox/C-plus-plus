#include <iostream>
using namespace std;

int main() {
    cout<<"Print Multiplication Table of : ";
    int n;
    cin>>n;
    cout<<"Multiplication Table Range : ";
    int range;
    cin>>range;

    for(int i=1; i<=range; i++){
        int calc = i*range;
        cout<<range<<" X "<<i << " = "<<calc<<endl;
    }

    return 0;
}
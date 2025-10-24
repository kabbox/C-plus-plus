#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Please enter the N numbers to calculate Natural Numbers : ";
    cin>>n;
    int calc = 0;
    for(int i=1; i<=n; i++){
        calc = calc + i;
    }
    cout<<calc;
    return 0;
}
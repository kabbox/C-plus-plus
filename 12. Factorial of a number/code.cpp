#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number for factorial : ";
    cin>>n;
    int num = 1;
    for(int i=1; i<=n; i++){
        num = num *i;
    }
    cout<<num;
    
    return 0;
}
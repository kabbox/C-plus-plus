#include <iostream>
using namespace std;

int main() {

    cout<<"Enter Array Element Size : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Elements : ";
    // For input Elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // For sum Elements
    int sum = 0;
    for(int i=0; i<n;i++){
        sum = arr[i]+sum; 
    }
    cout<<"Your Array Sum is: "<<sum;



    return 0;
}
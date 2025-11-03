#include <iostream>
using namespace std;

int main() {
    cout<<"Enter Array Size: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array Elements: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int copyArr[n];
    for(int i=0;i<n;i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }
    cout<<"Previous Array Order = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array order = ";
    for(int i=0;i<n;i++){
        cout<<copyArr[i]<<" ";
    }

    return 0;
}
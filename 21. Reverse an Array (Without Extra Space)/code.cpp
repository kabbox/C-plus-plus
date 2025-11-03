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
    cout<<"Your Array : ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int start = 0, end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<"Reversed Array: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// We can Also Use swap(start, end) Function To Reversed Array
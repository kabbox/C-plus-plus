#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout <<"Enter array Elements : ";
    int arrLength = sizeof(arr) / sizeof(int);
    for(int i=0; i<arrLength; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    
    for(int i=0;i < arrLength; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"Array Maximum Is: "<<max<<endl;
    cout<<"Array Minimum Is: "<<min;
    

    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    
    int arr[n];
    int arrLength = sizeof(arr) / sizeof(int);
    cout<<"Enter Array Elements: ";
    for(int i=0;i<arrLength;i++){
        cin>>arr[i];
    }

    cout<<"Enter the Number To Search: ";
    int key;
    cin>>key;
    for(int i=0; i<arrLength;i++){
         if(key == arr[i]){
            cout<<"Number Found at Index "<<i+1;
            break;
         }
    }   
    

    return 0;
}
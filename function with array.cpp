
#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n ;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int arr[n] = {1};
    
    printArray(arr, n);
    cout<<"\n";
    int arrSize = sizeof(arr)/sizeof(int);
    cout<<"Size of arr is : "<<arrSize<<endl;

    return 0;
}

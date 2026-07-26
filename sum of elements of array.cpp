#include <iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[100];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<sumArray(arr, n)<<endl;

    return 0;
}
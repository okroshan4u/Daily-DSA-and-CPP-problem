// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n ;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int a = 0 , b = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(a > arr[i]){
            a = arr[i];
        }
        else if( b < arr[i]){
            b = arr[i];
        }
    }
    cout<<"min value and max of array is: "<<a<<" and  "<<b<<endl;

    return 0;
}
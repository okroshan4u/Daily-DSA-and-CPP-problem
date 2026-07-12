#include <iostream>
using namespace std;

int main (){
    int n ;
    int i = 1;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    while(i<=n){
        int j = n-i;
        while(j>0){
            cout<<" ";
            j--;
        }
        int k = 1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }


    return 0 ;
}
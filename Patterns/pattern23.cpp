#include <iostream>
using namespace std;

int main (){
    int n ;
    int i = 1;
    int count = 1;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    while(i<=n){

        int j = 1;
        while(j<=n-i ){
            cout<<" ";
            j++;
        }

        int k = 0;
        while(k<i ){
            cout<< k + 1;
            k++;
        } 

        int l = 1;
        while(l<i ){
            cout<< i - l;
            l++;
        } 

        int m = 1;
        while(m<=n-i ){
            cout<<" ";
            m++;
        }

        cout<<endl;
        i++;
    }
    return 0 ;
}
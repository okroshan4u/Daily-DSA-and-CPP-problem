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
            cout<< count;
            count++;
            k++;
        } 
        cout<<endl;
        i++;
    }
    return 0 ;
}
#include <iostream>
using namespace std;

int main (){
    int n ;
    int i = 1;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    while(i<=n){

        int j = 1;
        while(j<i ){
            cout<<" ";
            j++;
        }

        int k = 0;
        while(k<n- i + 1){
            cout<< k + i  ;
            k++;
        } 
        cout<<endl;
        i++;
    }
    return 0 ;
}
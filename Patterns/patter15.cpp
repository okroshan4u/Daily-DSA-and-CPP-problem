#include <iostream>
using namespace std;

int main (){

    int i =  1;
    int count = 0;
    int n ;
    cout<<"Enter the number n: "<<endl;
    cin>>n;

    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + count ;
            cout<<ch<<" ";
            count++;
            j++;
        }
        cout<<'\n';

        i++;
    }


    return 0;
}
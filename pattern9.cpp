#include <iostream>
using namespace std;

int main(){
    int n ;
    int i = 1;

    cout<<"Enter the number n: "<<endl;
    cin>>n;

    while(i<=n){
        int j =  0;
        while(j<i){
            cout<< i + j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }


    return 0;
}
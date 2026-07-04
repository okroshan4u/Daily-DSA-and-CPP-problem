#include <iostream>
using namespace std

int main(){
    int n ;
    int i = 1;
    int count = 1;

    cout<<"Enter the number n: "<<endl;
    cin>>n;

    while(i<=n){
        int j =  1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<"\n";
        i++;
    }

    return 0;
}

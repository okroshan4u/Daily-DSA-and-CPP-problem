#include <iostream>
using namespace std;

int main(){
    int n ;
    int i = 1;
    int count = 1;

    cout<<"Enter the number n: "<<endl;
    cin>>n;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<j + count;
    //         j++;
    //     }
    //     count = count + j -1 ;
    //     cout<<"\n";
    //     i++;
    // }

    // or 

    while(i<=n){
        int j =  1;
        while(j<=n){
            cout<<count;
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }

    return 0;
}
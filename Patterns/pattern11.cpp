#include <iostream>
using namespace std;

int main(){
    int n ;
    // int i = 65;
    int i = 1;
    int k = 0;

    cout<<"Enter the number n: "<<endl;
    cin>>n;

    // while(k<n){
    //     int j =  1;
    //     while(j<=n){
    //         cout<<char(i + k )<<" ";
    //         j++;
    //     }
    //     cout<<"\n";
    //     k++;
    // }

    // cout<<char(65)<<endl;


    // or

    while(i<=n){
        int j = 1;
        while(j<=n){

            char ch = 'A'+ i -1;
            cout<< ch<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return 0;
}
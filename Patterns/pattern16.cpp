#include <iostream>
using namespace std;

int main (){
    int i =  1;
    int count = 0;
    int n ;
    cout<<"Enter the number n: "<<endl;
    cin>>n;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         char ch = 'A' + n + j - i - 1 ;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<'\n';
    //     i++;
    // }

    // or

    while(i<=n){
        int j = 1;
         char startingch = 'A' + n - i  ;
        while(j<=i){
            cout<<startingch<<" ";
            startingch++;
            j++;
        }
        cout<<'\n';
        i++;
    }

    return 0;
}
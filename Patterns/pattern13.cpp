#include <iostream>
using namespace std;

int main(){
    int n ;
    int i = 1;
    // int count = 0;

    cout<<"Enter the number n: "<<endl;
    cin>>n;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = 'A' - 1 + j + count ;
    //         cout<< ch<<" ";
    //         j++;
    //     }
    //     cout<<"\n";
    //     count++;
    //     i++;
    // }
    
    // or

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' - 2 + j + i ;
            cout<< ch<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    

    return 0;
}





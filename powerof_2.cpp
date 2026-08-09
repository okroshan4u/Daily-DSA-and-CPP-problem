#include <iostream>
using namespace std;

bool powerof2(int n){
    int count = 0;
    while(n != 0){
        if(n&1 == 1){
            count = count + 1;
        }
        n = n >> 1;
    }
    if(count == 1){
        return true ;
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    cout<<powerof2(n);
    return 0;
}

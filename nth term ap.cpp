// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ap_ans(int n){
    int ans = 3 * n + 7;
    return ans;
}


int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n; 
    cout<<ap_ans(n)<<endl;

    return 0;
}
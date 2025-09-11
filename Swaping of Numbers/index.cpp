// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter the number a and b"<<endl;
    cin>>a>>b;
    cout<<"Number before swaping is : "<<a<<","<<b<<endl;
    
    
    
    // swaping a and b using third variable 
    // // (i)
    // int temp = a;
    //  a = b;
    //  b = temp;
    // cout<<"Number after swaping by method (i) : "<<a<<","<<b<<endl;
    

    // swaping a and b without using third variable 
    // (ii)
    //  a = a  + b;
    //  b = a - b;
    //  a = a - b;
     
    // cout<<"Number after swaping by method (ii) : "<<a<<","<<b<<endl;
    
    
    // swaping a and b without using third variable 
    // (ii)
     a = a ^ b; // let a = 1 --> 01 and b = 2 --> 10 
                // now in XOR x ^ x = 0 and x ^ 0 = x
                // so 0 ^ 1 = 1 and 1 ^ 0 = 1 so --> 11 which is 3;
     b = a ^ b;
     a = a ^ b;
     
    cout<<"Number after swaping by method (iii) : "<<a<<","<<b<<endl;
    
    
    
    
    return 0;

}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int reverse(int arr[], int size){
    for(int i = size -1; i>=0;i--){
       cout<<arr[i]<<" ";
    }
    return true;
}

int main() {
    int arr[] = {3,4,5,8,12,-54,33,1,-2,6};
    
    cout<<reverse(arr, 10);

    return 0;
}

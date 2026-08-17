// Online C++ compiler to run C++ program on
#include <iostream>
#include <vector>
using namespace std;

void intersection_of_array(int arr[], int n, int brr[], int m){
        vector<int>dynamicArray;
        for(int i = 0 ; i < 7;i++){
        for(int j = 0 ; j < 6;j++){
            if(arr[i] == brr[j]){
                dynamicArray.push_back(arr[i]);
            }
        }
    }
    for(int value : dynamicArray){
        cout<<value<<" ";
    }
}

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int brr[6] = {8,9,10,2,5,7};
    intersection_of_array(arr, 7, brr, 6);
    

    return 0;
}




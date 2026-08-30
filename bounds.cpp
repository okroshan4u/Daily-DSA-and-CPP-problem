#include <bits/stdc++.h>
using namespace std;
// Implementation

int firstOccurance(int arr[], int size , int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int size , int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}


int main() {
    
int arr[] = {1,2,3,4,4,5,6};

cout<<firstOccurance(arr, 8,4)<<" ";
cout<<lastOccurance(arr, 8,4);

cout<<"Total number of occurances in the array is : "<<lastOccurance(arr, 8,4) - firstOccurance(arr, 8,4) + 1;

}

#include <iostream>
using namespace  std;

int binarySearch(int arr[],int size ,int key){
    int start=  0;
    int end = size - 1;

    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid]>key){
            end = mid -1 ;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        if(arr[mid]==key){
            return mid;
        }
        mid = (start + end )/2;
        
    }
    return -1;
}
int main() {
    int arr[]= {1,2,3,4,5,6,7,8};

    cout<<binarySearch(arr,8,6);

    return 0;
}

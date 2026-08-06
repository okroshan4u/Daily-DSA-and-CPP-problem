#include <iostream>
using namespace std;
bool search(int arr[], int size , int key){
    for(int i = 0; i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {3,4,5,8,12,-54,33,1,-2,6};
    cout<<"Enter the number you want to search "<<endl;
    int key ;
    cin>>key;
    
    cout<<search(arr, 10, key);

    return 0;
}
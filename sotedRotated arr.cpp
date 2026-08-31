int getPivot(vector<int>& arr, int size){
    int s = 0;
    int e = size - 1;
    
    int mid = s - (s - e)/2;
    
    while(s < e){
        
        if(arr[mid]>= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid ;
        }
        mid = s - (s - e)/2;
    }
    return s;
}


int binarySearch(vector<int>& arr, int start, int end , int key){
    
    int s = start ;
    int e = end;
    int mid = s - (s - e)/2;
    
    while( s <= e){
        
        if(key == arr[mid]){
            
            return mid;
        }
        if(key> arr[mid]){
            s = mid + 1;
        }
        else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s - (s - e)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    // BS on 2nd line
    if(k>= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0 , pivot - 1, k);
    }
}

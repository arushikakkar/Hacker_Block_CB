#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,0,1,2,0,1,2,0,0,2};
    int n =sizeof(arr)/sizeof(int);

    int low=0, mid=0, high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
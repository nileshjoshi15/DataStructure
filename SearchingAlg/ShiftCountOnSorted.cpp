#include<iostream>
using namespace std;
int ShiftCountOnSorted(int* arr,int size);

int main(){
    int arr[5]={4,5,1,2,3};
   
    cout<<"Shifted by : "<<ShiftCountOnSorted(arr,5)<<endl;
    return 0;
}

int ShiftCountOnSorted(int* arr,int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[start]<=arr[end]){
            return 0;
        }
        int prev=(mid+size-1)%size;
        int next=(mid+1)%size;
        if(arr[mid]<arr[prev] && arr[mid]<arr[next]){
            return mid;
        }
        else if(arr[mid]>=arr[end]){
            start=mid+1;
        }
        else if(arr[mid]>=arr[start]){
            end=mid-1;                
        }
    }
}

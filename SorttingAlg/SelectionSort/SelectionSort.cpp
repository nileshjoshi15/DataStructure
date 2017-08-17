#include<iostream>
using namespace std;

int* SelectionSort(int* arr,int size);

int main(){
    int arr[10]={2,4,1,3,7,6,5,8,9,0};
    SelectionSort(arr,10);
    for(int i=0;i<10;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}

int MaxIndex(int* arr,int size){
    int max=arr[0];
    int max_index=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
    }
    return max_index;   
}

int* SelectionSort(int* arr,int size){
    for(int i=size-1;i>=0;i--){
        int max_index=MaxIndex(arr,i+1);
        int tempmax=arr[max_index];
        arr[max_index]=arr[i];
        arr[i]=tempmax;
    }
}

























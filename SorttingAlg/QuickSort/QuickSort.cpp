#include<iostream>
using namespace std;

void QuickSort(int* arr,int start,int end);
int Partition(int* arr,int start,int end);


int main(){
    int arr[5]={3,4,2,5,1};
    QuickSort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

void QuickSort(int *arr,int start,int end){
    if(start<end){
        int pIndex=Partition(arr,start,end);
        cout<<"Partion index : "<<pIndex<<endl;
        QuickSort(arr,start,pIndex-1);
        QuickSort(arr,pIndex+1,end);
    }
}

int Partition(int *arr,int start,int end){

    int pivot=arr[end];
    int pIndex=start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            int temp=arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]=temp;
            pIndex++;
        }
    }
    int temp=arr[end];
    arr[end]=arr[pIndex];
    arr[pIndex]=temp;
    return pIndex;
}






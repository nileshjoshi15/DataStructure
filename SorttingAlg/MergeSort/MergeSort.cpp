#include<iostream>
using namespace std;

void Merge(int* arr,int start,int mid,int end){

    int size1=mid-start+1;
    int size2=end-mid;

    int arr1[size1];
    int arr2[size2];

    for(int i=0;i<size1;i++){
        arr1[i]=arr[start+i];
    }
    for(int j=0;j<size2;j++){
        arr2[j]=arr[mid+1+j];
    }
    int arr1Index=0;
    int arr2Index=0;
    int arrIndex=start;
    while(arr1Index<size1 && arr2Index<size2){
        if(arr1[arr1Index]<=arr2[arr2Index]){
            arr[arrIndex]=arr1[arr1Index];
            arr1Index++;
        }
        else{
            arr[arrIndex]=arr2[arr2Index];
            arr2Index++;
        }
        arrIndex++;
    }
    while(arr1Index<size1){
        arr[arrIndex]=arr1[arr1Index];
        arr1Index++;
        arrIndex++;
    }

    while(arr2Index<size2){
        arr[arrIndex]=arr2[arr2Index];
        arr2Index++;
        arrIndex++;
    }
}



void MergeSort(int* arr,int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);
    }
}



int  main(){
    int arr[8]={3,5,4,8,7,6,9,1};
  //  int size=sizeof(arr)/sizeof(int);
    
    MergeSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    return 0;
}

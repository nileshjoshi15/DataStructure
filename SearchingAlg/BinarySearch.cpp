#include<iostream>
using namespace std;
int BinarySearchIter(int* arr,int size,int x);
int BinarySearchRecur(int* arr,int start,int end,int x);

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<"Index : "<<BinarySearchIter(arr,5,1)<<endl;

    cout<<"Index Recur : "<<BinarySearchRecur(arr,0,4,1)<<endl;
    return 0;
}


int BinarySearchRecur(int* arr, int start,int end,int x){
    int mid=(start+end)/2;

    if(arr[mid]==x) return mid;
    else if(arr[mid]>x){
        return BinarySearchRecur(arr,start,mid-1,x);
    }
    else{
        return BinarySearchRecur(arr,mid+1,end,x);
    }

}



int BinarySearchIter(int* arr,int size,int x){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

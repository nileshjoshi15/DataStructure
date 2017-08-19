#include<iostream>
using namespace std;
int FindFirstOrLastOccur(int* arr,int size,bool isFirst,int x);

int main(){
    int arr[5]={1,2,3,4,4};
    cout<<"First occurance is at : "<<FindFirstOrLastOccur(arr,5,true,4)<<endl;
    cout<<"Last occurance is at : "<<FindFirstOrLastOccur(arr,5,false,4)<<endl;
}


int FindFirstOrLastOccur(int* arr,int size,bool isFirst,int x){
    int start=0;
    int end=size-1;
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            result=mid;
            if(isFirst){
                end=mid-1;
            }
            start=mid+1;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return result;
}

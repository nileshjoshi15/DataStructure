#include<iostream>
using namespace std;
void BubbleSort(int *arr,int size);

int main(){
    int arr[6]={9,8,3,2,7,5};
    
    BubbleSort(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}   



void BubbleSort(int *a,int size){
    for(int i=0;i<size;i++){
        int flag=0;                    /*Consider array is sorted*/
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;                 /*Oops array is not sorted.*/
            }
        }
        if(flag==0){                    /*If already sorted, exit. improvement on based case*/
            break;
        }
    }
}

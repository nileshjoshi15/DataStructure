#include<iostream>
using namespace std;
void InsertionSort(int* arr,int size);


int main(){
    int arr[5]={9,8,7,6,5};
    InsertionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort(int* arr,int size){
    
    for(int i=1;i<size;i++){
        int value=arr[i];
        int h_pos=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>value){
                arr[h_pos]= arr[j];
                h_pos--;
            }else{
                break;
            }
        }
        arr[h_pos]=value;
    }

}

#include<iostream>
#include<math.h>
using namespace std;

void HeapSort(int* arr,int size);
void BuildHeap(int* arr,int size);
void Heapify(int* arr,int pos,int _size);
int Parent(int i);
int Left(int i);
int Right(int i);


int main(){
    int arr[10]={4,1,3,2,16,9,10,14,8,7};
    HeapSort(arr,10);

    //int* sortArr=sort.Sort();

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Testing"<<endl;
    return 0;
}

void HeapSort(int* arr,int size){
    BuildHeap(arr,size);
    for(int i=size-1;i>=1;i--){
       int temp=arr[i];
       arr[i]=arr[0];
       arr[0]=temp;
       size-=1;
       Heapify(arr,0,size);
    }
}

void BuildHeap(int* arr,int size){
   int len=floor(size/2);
   for(int i=len-1;i>=0;i--){
        Heapify(arr,i,size);
   }
}

void Heapify(int* arr,int pos,int _size){
    int l=Left(pos);
    int r=Right(pos);
    int large;

    if(l<_size && arr[l]>arr[pos])
        large=l;
    else
        large=pos;

    if(r<_size && arr[r]>arr[large])
        large=r;
    
    if(large!=pos){
        /*Swapping */
        int temp=arr[pos];
        arr[pos]=arr[large];
        arr[large]=temp;
        Heapify(arr,large,_size);
    }
}


int Parent(int i){
    return floor((i-1)/2);
}

int Left(int i){
    return 2*i+1;
}

int Right(int i){
    return 2*i+2;
}




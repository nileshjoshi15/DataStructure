#include<iostream>
#include "HeapSort.h"
#include<math.h>

HeapSort::HeapSort(){

}

HeapSort::HeapSort(int* _arr,int _size):arr(_arr),size(_size){
    Sort();
}

HeapSort::~HeapSort(){
}

void HeapSort::Sort(){
    BuildHeap();
    int tempsize=size;
    for(int i=size-1;i>=1;i--){
       int temp=arr[i];
       arr[i]=arr[0];
       arr[0]=temp;
       
       tempsize-=1;
       Heapify(0,tempsize);
       
    }

}

void HeapSort::Display(){
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }

}

void HeapSort::BuildHeap(){
   int len=floor(size/2);
   for(int i=len-1;i>=0;i--){
        Heapify(i,size);
   }
}

void HeapSort::Heapify(int pos,int _size){
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

        Heapify(large,_size);
    }

}

int HeapSort::Parent(int i){
    return floor((i-1)/2);
}

int HeapSort::Left(int i){
    return 2*i+1;
}

int HeapSort::Right(int i){
    return 2*i+2;
}

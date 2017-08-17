#include<iostream>
#include "HeapSort.h"
using namespace std;

int main(){
    int arr[10]={4,1,3,2,16,9,10,14,8,7};
    HeapSort sort(arr,10);

    sort.Display();
    cout<<"Testing"<<endl;
    return 0;
}

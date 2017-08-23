#include<iostream>
using namespace std;

int RemoveDup(int* arr,int size){
    int tempsize=size;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){    
            if(arr[i]==arr[j]){
                for(int k=j+1;j<tempsize;j++){
                    arr[k-1]=arr[k];
                }
                tempsize--;
            }

        }

        if(i== tempsize-1){
            break;    
        }
    }
    return tempsize;

}


int RemoveDupEff(int* arr,int size){
    bool* lookup=new bool[128];
    for(int i=0;i<size;i++){
        cout<<int(arr[i])<<endl;
    }
    return 0;
}




int main(){
    int arr[6]={5,2,3,4,5,5};
    /*
    int newsize= RemoveDup(arr,5);
    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/
    RemoveDupEff(arr,6);
    return 0;
}

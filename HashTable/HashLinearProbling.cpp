#include<iostream>
using namespace std;

class HashMap{
    private:
        static const int size=10;
        int arr[size];

        int getHashVal(int value){
            return value%size;
        }


    public:
        HashMap(){
            for(int i=0;i<size;i++){
                arr[i]=-1;
            }

        }
        void Insert(int value){
            int index=getHashVal(value);
            while(arr[index]!=-1){
                index=index+1;
                index=getHashVal(index);
            }
            arr[index]=value;
        }
        void Display(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int Search(int value){
            int index=getHashVal(value);
            while(arr[index]!=-1 && arr[index]!=value){
                index=index+1;
                index=getHashVal(index);
            }
            return arr[index];

        }
        int Delete(int value){
            int index=getHashVal(value);
            while(arr[index]!=-1 && arr[index]!=value){
                index=index+1;
                index=getHashVal(index);
            }
            if(arr[index]==value){
                arr[index]=-9;
            }
        }




};


int main(){
    HashMap hash;
    hash.Insert(10);
    hash.Insert(20);
    hash.Insert(11);
    hash.Display();
    hash.Delete(20);
    hash.Display();
    cout<<" Searching ..."<<hash.Search(19)<<endl;

    return 0;
}


#include<iostream>
using namespace std;

string RecursiveReverse(string input,int start,int end){
    if(start>=end){
        return input;
    }
    char temp=input[end];
    input[end]=input[start];
    input[start]=temp;
    return RecursiveReverse(input,start+1,end-1);
}

int main(){
    string input="abcde";
    cout<<"Reverse is : "<<RecursiveReverse(input,0,4)<<endl;
}

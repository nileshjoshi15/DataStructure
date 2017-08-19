/*Finding the maximum sum of two mumber in array*/
#include<iostream>
using namespace std;
int findMaxOfTwo(int* arr,int size){
	int max=arr[0];
	int nextMax=arr[1];
	for(int i=1;i<size;i++){
		bool check=false;
		if(arr[i]>max){
			nextMax=max;
			max=arr[i];
			check=true;
		}
		if(arr[i]>nextMax && check==false){
			nextMax=arr[i];
		}
	}
	return max+nextMax;
}


int main(){
	int arr[]={3,2,7,5,8,6};
	cout<<"max two : "<<findMaxOfTwo(arr,6)<<endl;
	return 0;
}

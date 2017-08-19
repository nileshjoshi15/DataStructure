/*Write recursive bool function that determines array element are 
 * stricking increaseing or not */
#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
	if(size<2) return true;
	if(arr[size-2]>arr[size-1]) return false;
	return isSorted(arr,size-1);
}

int main(){
	int arr[]={1,2,3,4,5};
	int arr2[]={1,2,3,6,4};

	cout<<"Arr1 "<<isSorted(arr,5)<<endl;
	cout<<"Arr1 "<<isSorted(arr2,5)<<endl;
	return 0;
}

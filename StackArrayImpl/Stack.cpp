#include<iostream>
#include "Stack.h"

Stack::Stack(){
	length=1;
	temp_pos=-1;
	arr=new int[length];
}

void Stack::Push(int value){
	temp_pos++;
	if(temp_pos==length){
		ExpandStack();
	}	
	arr[temp_pos]=value;
}

int Stack::Pop(){
	if(temp_pos==1){
		std::cout<<"Stack is empty\n";
		return -1;
	}
	return  arr[temp_pos--];
}


int Stack::Peak(){
	if(temp_pos==1){
		std::cout<<"Stack is empty\n";
		return -1;
	}
	return arr[temp_pos];
}




void Stack:: DisplayItems(){
	for(int i=temp_pos;i>=0;i--){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;

}

void Stack::ExpandStack(){

	int tempArr[length];
	int prevLen=length;
	for(int i=0;i<length;i++){
		tempArr[i]=arr[i];
	}
	length=2*length;
	arr=new int[length];

	for(int i=0;i<prevLen;i++){
		arr[i]=tempArr[i];
	}
}

Stack::~Stack(){
	delete arr;
}

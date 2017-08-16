#include<iostream>
#include  "Stack.h"


Stack::Stack(){
	headNode=NULL;
	length=0;
}


void Stack::Push(int value){
	Node* newNode=new Node();
	newNode->value=value;
	newNode->nextNode=NULL;

	if(headNode==NULL){
		headNode=newNode;
		length+=1;
		return;
	}
	newNode->nextNode=headNode;
	headNode=newNode;
	length+=1;
}

int Stack::Pop(){
	if(headNode==NULL){
		std::cout<<"Stack is Empty"<<std::endl;
		return -1;
	}
	int val=headNode->value;
	headNode=headNode->nextNode;
	return val;	
}


int Stack::Peak(){
	if(headNode==NULL){
		std::cout<<"Stack is Empty"<<std::endl;
		return -1;
	}
	return headNode->value;
}

int Stack::Length(){
	return length;
}



void Stack:: DisplayItems(){
	if(headNode==NULL){
		std::cout<<"Empty list"<<std::endl;
		return;
	}
	Node* temp=headNode;
	while(temp!=NULL){
		std::cout<<temp->value<<" ";
		temp=temp->nextNode;
	}	

}


Stack::~Stack(){
	delete headNode;
}

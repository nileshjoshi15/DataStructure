#include<iostream>
#include "Queue.h"

Queue::Queue(){
	headNode=NULL;
	length=0;
}

void Queue::DisplayItems(){
	if(headNode==NULL){
		std::cout<<"Empty queue\n";
		return;
	}
	Node* tempNode=headNode;
	while(tempNode!=NULL){
		std::cout<<tempNode->value<<" ";
		tempNode=tempNode->nextNode;
	}
}

void Queue::Enqueue(int value){
	Node* newNode=new Node();
	newNode->value=value;
	newNode->nextNode=NULL;

	if(headNode==NULL){
		headNode=newNode;
		return;
	}
	Node* tempNode=headNode;

	while(tempNode!=NULL){
		if(tempNode->nextNode==NULL){
			tempNode->nextNode=newNode;
			return;
		}
		tempNode=tempNode->nextNode;
	}
}

int Queue::Dequeue(){
	if(headNode==NULL){
		std::cout<<"Queue is empty\n";
		return -1;
	}
	int value=headNode->value;
	headNode=headNode->nextNode;
	return value;
}

int Queue::Peak(){
	if(headNode==NULL){
		std::cout<<"Queue is empty\n";
		return -1;
	}
	return headNode->value;
}



Queue::~Queue(){
	delete headNode;
}

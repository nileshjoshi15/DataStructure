#include "Queue.h"

Queue::Queue(){
	headNode=NULL;
	length=0;
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
		tempNode=tempNode->value;
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

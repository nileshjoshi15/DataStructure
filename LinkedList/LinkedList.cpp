#include "LinkedList.h"
#include<iostream>

LinkedList::LinkedList(){
	headNode=NULL;
	length=0;
}

/*Various Node  Insert Operations */
void LinkedList::InsertNodeAtBegin(int value){
	Node* newNode=CreateNode(value);
	if(headNode==NULL){
		headNode=newNode;
		length+=1;
		return;
	}
	newNode->nextNode=headNode;
	headNode=newNode;
	length+=1;
}
void LinkedList::InsertNodeAtEnd(int value){
	Node* newNode=CreateNode(value);
	if(headNode==NULL){
		headNode=newNode;
		length+=1;
		return;
	}
	Node* tempNode=headNode;
	while(tempNode!=NULL){
		if(tempNode->nextNode==NULL){
			tempNode->nextNode=newNode;
			length+=1;
			return;
		}
		tempNode=tempNode->nextNode;
	}
}

void LinkedList::InsertNodeAtNpos(int value,int n){
	Node* newNode=CreateNode(value);
	
	if(headNode==NULL){
		headNode=newNode;
		length+=1;
		return;
	}

	if(n==1){
		newNode->nextNode=headNode;
		length+=1;
		return;
	}
	Node* travelNode=headNode;
	int pos=1;
	while(travelNode!=NULL){
		pos++;
		if(pos==n){
			newNode->nextNode=travelNode->nextNode;
			travelNode->nextNode=newNode;
			length+=1;
			return;
		}
		travelNode=travelNode->nextNode;
	}	
}

/*Various node Delete operations */

void LinkedList::DeleteNodeFromBegin(){
	headNode=headNode->nextNode;
	length-=1;
}


void LinkedList::DeleteNodeFromEnd(){
	if(headNode==NULL){
		std::cout<<"Empty list"<<std::endl;
		return;
	}
	Node* temp=headNode;
	if(temp->nextNode==NULL){
		headNode=NULL;
		return;
	}

	while(temp!=NULL){
		if((temp->nextNode)->nextNode==NULL){
			temp->nextNode=NULL;
			return;
		}	
		temp=temp->nextNode;
	}
}

void LinkedList::DeleteNodeAtNpos(int n){
	if(headNode==NULL){
		std::cout<<"Empty list"<<std::endl;
		return;
	}
	if(n==1){
		headNode=headNode->nextNode;
		return;
	}
	Node* tempNode=headNode;
	int pos=1;
	while(tempNode!=NULL){
		pos++;
		Node* prevNode=tempNode;
		if(tempNode->nextNode==NULL && pos!=n) break;

		Node* currentNode=tempNode->nextNode;
		Node* nextNode=currentNode->nextNode;
		if(pos==n){
			prevNode->nextNode=nextNode;
			std::cout<<"tesin";
			return;
		}
		tempNode=tempNode->nextNode;
		
	}
	std::cout<<"Did not find index "<<std::endl;
}




/*Node Utilities*/
int LinkedList::Length(){
	return length;
}
void LinkedList::DisplayList(){
	if(headNode==NULL){
		std::cout<<"No Element in list"<<std::endl;
		return;
	}
	Node* tempNode=headNode;
	while(tempNode!=NULL){
		std::cout<<tempNode->value<<" ";
		tempNode=tempNode->nextNode;
	}
	std::cout<<std::endl;

}
LinkedList::Node* LinkedList::CreateNode(int value){
	Node* temp=new Node();
	temp->value=value;
	temp->nextNode=NULL;
	return temp;
}


LinkedList::~LinkedList(){
	delete headNode;
}

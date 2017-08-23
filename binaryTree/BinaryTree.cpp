#include<iostream>
#include "binaryTree.h"

BinaryTree::BinaryTree(){
	rootNode=NULL;
}
BinaryTree::Node* BinaryTree::CreateNode(int value){
	Node* newNode=new Node();
	newNode->value=value;
	newNode->leftNode=NULL;
	newNode->rightNode=NULL;
	return newNode;
}

int BinaryTree::FindMin(){
	if(rootNode==NULL){
		return -1;
	}
	Node* tempRoot=rootNode;
	while(tempRoot!=NULL){
		if(tempRoot->leftNode==NULL){
			return tempRoot->value;
		}
		tempRoot=tempRoot->leftNode;
	}

}
int BinaryTree::Height(Node* node){
    if(node==NULL){
        return -1;
    }
    int left=Height(node->leftNode);
    int right=Height(node->rightNode);

    return (left>right?left:right)+1;
}



int BinaryTree::FindHeight(){
    return Height(rootNode);
}


int BinaryTree::FindMax(){
	if(rootNode==NULL){
		return -1;
	}
	Node* tempRoot=rootNode;
	while(tempRoot!=NULL){
		if(tempRoot->rightNode==NULL){
			return tempRoot->value;
		}
		tempRoot=tempRoot->rightNode;
	}

}

bool BinaryTree::SearchNode(int value){

	if(rootNode==NULL){
		return false;
	}
	Node* tempRoot=rootNode;
	while(tempRoot!=NULL){
		if(value==tempRoot->value){
			return true;
		}
		if(value<tempRoot->value){
				tempRoot=tempRoot->leftNode;
		}else{
				tempRoot=tempRoot->rightNode;
		}
	}
	return false;
}


void BinaryTree:: InsertNode(int value){
	Node* newNode=CreateNode(value);
	if(rootNode==NULL){
		rootNode=newNode;
		return;
	}
	Node* tempRoot=rootNode;
	while(tempRoot!=NULL){
		if(value<=tempRoot->value){
			if(tempRoot->leftNode==NULL){
				tempRoot->leftNode=newNode;	
				return;
			}else{
				tempRoot=tempRoot->leftNode;
			}
		}else{
			if(tempRoot->rightNode==NULL){
				tempRoot->rightNode=newNode;	
				return;
			}else{
				tempRoot=tempRoot->rightNode;
			}

		}
	}
}

BinaryTree::~BinaryTree(){
	delete rootNode;
}

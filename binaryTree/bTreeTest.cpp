#include<iostream>
#include "binaryTree.h"

using namespace std;

int main(){
	BinaryTree tree;
	tree.InsertNode(10);
	tree.InsertNode(20);
	tree.InsertNode(9);

	cout<<"Testing"<<endl;
	cout<<"Search result : "<<tree.SearchNode(20)<<endl;
	cout<<"min  result : "<<tree.FindMin()<<endl;
	cout<<"max result : "<<tree.FindMax()<<endl;
}

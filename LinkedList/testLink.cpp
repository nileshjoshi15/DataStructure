#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
	LinkedList list;
	list.InsertNodeAtBegin(1);
	list.InsertNodeAtBegin(2);
	list.InsertNodeAtBegin(3);
	list.DisplayList();
	list.InsertNodeAtEnd(4);
	list.DisplayList();
	list.InsertNodeAtNpos(5,3);
	list.DisplayList();
	list.InsertNodeAtNpos(6,5);
	list.DisplayList();
//	list.DeleteNodeFromBegin();
//	list.DisplayList();
	cout<<"testing length : "<<list.Length()<<endl;
	cout<<"Deleting item from end"<<endl;
//	list.DeleteNodeFromEnd();
	list.DeleteNodeAtNpos(6);
	list.DisplayList();

	return 0;
}

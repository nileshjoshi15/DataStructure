#ifndef _linkedlist_class
#define _linkedlist_class

class LinkedList{
	private:
		struct Node{
			int value;
			Node* nextNode;
		};
		Node* headNode;
		int length;

		Node* CreateNode(int value);

	public:
		LinkedList();
		~LinkedList();

		void InsertNodeAtBegin(int value);
		void InsertNodeAtEnd(int value);
		void InsertNodeAtNpos(int value,int n);
		
		void DeleteNodeFromBegin();
		void DeleteNodeFromEnd();
		void DeleteNodeAtNpos(int n);

		void DisplayList();
		int Length();	
		
};
#endif

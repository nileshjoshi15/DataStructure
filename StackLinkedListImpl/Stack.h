#ifndef _stack_class
#define _stack_class

class Stack{
	private:
		struct Node{
			int value;
			Node* nextNode;
		};
		int length;
		Node* headNode;
	public:
		Stack();
		~Stack();

		int Peak();
		void Push(int value);
		int Pop();
		
		int Length();
		void DisplayItems();


};
#endif

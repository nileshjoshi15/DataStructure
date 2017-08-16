#ifndef _stack_class
#define _stack_class

class Stack{
	private:
		int *arr;
		int length;
		int temp_pos;
		void ExpandStack();
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

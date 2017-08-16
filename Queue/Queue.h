
#ifndef _queue_class
#define _queue_class
	
class Queue{
	private:
		struct Node{
			int value;
			Node* nextNode;
		};
		Node* headNode;
		int length;

	public:
		Queue();
		~Queue();
		void Enqueue(int value);
		int Dequeue();
		int Peak();
		void DisplayItems();


};




#endif




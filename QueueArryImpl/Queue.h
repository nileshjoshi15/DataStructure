#ifndef _queue_class
#define _queue_class

#include<iostream>
class Queue{
	private:
        int size;
		int* arr;
        int front;
        int rear;
        bool isFull();
        bool isEmpty();
	public:
		Queue();
		~Queue();
		void Enqueue(int value);
		int Dequeue();
		void DisplayItems();
        int Top();        
        
        void PrintFront();
};
#endif




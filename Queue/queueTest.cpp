#include<iostream>
#include "Queue.h"
using namespace std;



int main(){
	
	Queue queue;
	queue.Enqueue(10);
	queue.Enqueue(20);
	cout<<"Printing elements "<<endl;
	queue.DisplayItems();

	cout<<"Peak : "<<queue.Peak()<<endl;
	cout<<"Deque : "<<queue.Dequeue()<<endl;
	return 0;
}



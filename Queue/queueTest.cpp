#include<iostream>
#include "Queue.h"
using namespace std;



int main(){
	
	Queue queue;
	queue.Enqueue(10);
	queue.Enqueue(20);
	cout<<queue.Peak()<<endl;
	cout<<queue.Dequeue()<<endl;
	return 0;
}



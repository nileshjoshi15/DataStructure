#include<iostream>
#include "Queue.h"
using namespace std;

int main(){
    Queue queue;
    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Enqueue(40);
    queue.Enqueue(50);
    queue.Enqueue(60);
    queue.Enqueue(70);
    queue.Enqueue(80);
    queue.Enqueue(90);
    queue.Enqueue(100);
    queue.Enqueue(20);
    cout<<"Top val : "<<queue.Top()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;

    queue.PrintFront();
    queue.Enqueue(110);

    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;

    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
    queue.PrintFront();
    cout<<"top  val : "<<queue.Top()<<endl;
    cout<<"Dequeue val : "<<queue.Dequeue()<<endl;
}

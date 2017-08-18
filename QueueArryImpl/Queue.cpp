#include "Queue.h"

Queue::Queue(){
    size=10;
    arr=new int[size];
    front=-1;
    rear=-1;
}

int Queue::Top(){
    return arr[front];
}

int  Queue::Dequeue(){
    int temp;

    if(isEmpty()){
        std::cout<<"Empty Queue"<<std::endl;
        return -1;
    }
    else if(front==rear){
        temp=arr[front];
        front=rear=-1;
        std::cout<<" avfun : "<<temp<<" ";
    }
    else{
        temp=arr[front];
        std::cout<<" avfun : "<<temp<<" ";
        front=(front+1)%size;
    }
    return temp;

}
void Queue::PrintFront(){
std::cout<<" Front alue is : "<<front<<" rear :"<<rear<<std::endl;

}

void Queue::Enqueue(int value){
    if((rear+1)%size==front){
        std::cout<<"Queue is Full"<<std::endl;
        return;
    }
    else if(isEmpty()){
        rear=front=0;
    }
    else{
        rear=(rear+1)%size;
    }
    arr[rear]=value;
}

bool Queue::isEmpty(){
    return (rear==-1 && front ==-1);
}

Queue::~Queue(){
}

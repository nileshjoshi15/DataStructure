#include<iostream>
#include "Stack.h"

using namespace std;

int main(){


	Stack stack;
	stack.Push(10);
	stack.Push(20);
	cout<<"Peak : "<<stack.Peak()<<endl;
	stack.DisplayItems();
	cout<<"Pop : "<<stack.Pop()<<endl;
	stack.DisplayItems();

	cout<<"testing"<<endl;
	return 1;
}

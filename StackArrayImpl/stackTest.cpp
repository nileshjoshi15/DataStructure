#include<iostream>
#include "Stack.h"
using namespace std;

int main(){
	Stack stack;
	stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	stack.DisplayItems();
	cout<<"Peak value : "<<stack.Peak()<<endl;
	cout<<"Pop value : "<<stack.Pop()<<endl;
	stack.DisplayItems();
	return 0;

}

#include<iostream>
#include "OperatorOverLoad.h"

using namespace std;


OperatorOverLoad::OperatorOverLoad(int _num1,int _num2):num1(_num1),num2(_num2){
	
}

void OperatorOverLoad:: operator+=(int a){
	cout<<"Value of a : "<<a<<endl;
	this->num1+=a;
	this->num2+=a;
}


OperatorOverLoad OperatorOverLoad::operator+(OperatorOverLoad  &op){
	return OperatorOverLoad(this->num1+op.num1,this->num2+op.num2);
}

bool OperatorOverLoad:: operator==(OperatorOverLoad  &op){
	return (this->num1==op.num1 && this->num2==num2);	
}

void OperatorOverLoad::DisplayNums(){
	cout<<"First Num : "<<num1<<" Second Num : "<<num2<<endl;
}

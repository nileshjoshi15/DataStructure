#include<iostream>
#include "OperatorOverLoad.h"

using namespace std;


int main(){
	OperatorOverLoad oper(3,4);
	oper.DisplayNums();

	OperatorOverLoad oper2(3,4);
	oper2.DisplayNums();

	OperatorOverLoad oper3=oper+oper2;
	oper3.DisplayNums();

	if(oper==oper2){
		cout<<"equla"<<endl;
	}
	oper3+=1;
	oper3.DisplayNums();
}

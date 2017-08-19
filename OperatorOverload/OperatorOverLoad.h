
#ifndef _operator_load
#define _operator_load

class OperatorOverLoad{
private:
	int num1;
	int num2;

public:
	OperatorOverLoad(int _num1,int _num2);
	void DisplayNums();
	OperatorOverLoad operator+(OperatorOverLoad  &op);
	void operator+=(int a);
	bool  operator==(OperatorOverLoad  &op);
};
#endif

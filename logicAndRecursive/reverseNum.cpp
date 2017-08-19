/*Reverse num*/
#include<iostream>
#include<math.h>
using namespace std;
int reverseInt(int a){
	int temp=0;
	while(a!=0){
		int rightNum=a%10;
		temp=10*temp+rightNum;
		a=a/10;
	}
	return temp;
}

int main(){
	int n;
	cout<<"Enter number : ";
	cin>>n;
	cout<<"Reverse number is : "<<reverseInt(n)<<endl;
	return 0;
}


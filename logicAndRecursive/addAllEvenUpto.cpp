/*Add all even number upto given even*/
#include<iostream>
using namespace std;

int sumEven(int n){
	int t_item=n%2==0?(n/2)+1:(n+1)/2;
	int last_item=n%2==0?n:n-1;
	return (t_item*last_item)/2;

}


int  main(){
	cout<<"Sum of even : "<<sumEven(7)<<endl;
	return 0;
}

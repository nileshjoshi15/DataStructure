#include<iostream>
using namespace std;


void printStarTree(int rownum){
	for(int i=0;i<rownum;i++){
		int t_star=2*i+1;
		for(int j=0;j<t_star;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}


int main(){
	int n;
	cout<<"Number of rows : ";
	cin>>n;
	printStarTree(n);
	return 0;
}

#include<iostream>
using namespace std;

void printNumberTree(int numrows){
	for(int i=1;i<=numrows;i++){
		for(int j=0;j<i*2;j++){
			cout<<2*i+j<<" ";
		}
		cout<<endl;
	}

}


int main(){
	int n;
	cout<<"Enter number : ";
	cin>>n;
	printNumberTree(n);
	return 0;
}


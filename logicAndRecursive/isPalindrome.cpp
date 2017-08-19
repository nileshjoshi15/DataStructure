/*Check if string is palindrome or not */
#include<iostream>
using namespace std;

bool isPalindrome(char charr[],int init,int final){
	if(init>=final) return true;
	if(charr[init]!=charr[final]) return false;
	return isPalindrome(charr,init+1,final-1);
}


int main(){
	cout<<"Is palindrome : "<<isPalindrome("abba",0,3)<<endl;
	cout<<"Is palindrome : "<<isPalindrome("abcba",0,4)<<endl;
	cout<<"Is palindrome : "<<isPalindrome("abbaa",0,4)<<endl;
	return 0;
}

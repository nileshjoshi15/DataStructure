#include<iostream>
using namespace std;

int main(){
    int number=1024;

    while(number!=0){
        cout<<number%10<<endl;
        number=number/10;
    }

}

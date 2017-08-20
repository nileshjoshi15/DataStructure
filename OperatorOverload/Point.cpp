#include<iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;

    public:
        Point(){}
        Point(int _x,int _y):x(_x),y(_y){}

        /*+ add two obj*/
        Point  operator+(Point &in){
            Point p2;
            p2.x=this->x+in.x;
            p2.y=this->y+in.y;
            return p2;
        }
        /*swap two values */
        void operator!(){
            int temp=this->y;
            this->y=this->x;
            this->x=temp;
        }

        /*Add two*/
        Point operator=(Point &in){
            return Point(in.x,in.y);
            /*
            Point n;
            n.x=in.x;
            n.y=in.y;
            return n;*/
        }

        /*check is equal*/
        bool operator==(Point in){
            return this->x>in.x && this->y>in.y;
        }
        
        /*increasement */
        void operator++(int n){
            this->x=this->x+2;
            this->y=this->y+2;
        }

        void operator+=(Point &n){

            this->x=this->x+n.x;
            this->y=this->y+n.y;
        }

        void printCoordinates(){
            cout<<"x : "<<this->x<<" y : "<<this->y<<endl;
        }
};

int main(){
    Point p1(2,3);
    Point p2(4,6);

    Point p3=p1+p2;
    !p2;
    Point p4=p2;
    cout<<"Printing co :"<<endl;
    p3.printCoordinates();
    p2.printCoordinates();
    p4.printCoordinates();
    p4+=p2;
    cout<<"Print p4 afer increase"<<endl;
    p4.printCoordinates();
    bool val;
    val=p2==p1;
    cout<<"x > y : "<<val<<endl;
    


}


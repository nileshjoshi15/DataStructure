#include<iostream>

class HashTable{
    private:
        int size;
        struct Node{
            int value;
            Node* nextNode;
        };
        Node* node[];

    public:
        HashTable(){
            size=10;
            node=new Node[size];
          
            for(int i=0;i<size;i++){
                node[i].value=-1;
                node[i].nextNode=NULL;
            }

        }

        void Insert(int value){
            Node* nodeNew=new Node;
            nodeNew->value=value;
            nodeNew->nextNode=NULL;


            int index=value%size;


            if(node[index]==NULL){
                node[index]=nodeNew;
                return;
            }
            Node* node=node[index];

            while(node!=NULL){
                if(node->nextNode==NULL){
                    node->nextNode=node;
                    return;
                }
                node=node->nextNode;
            }
        }
};



int main(){

    return 0;
}

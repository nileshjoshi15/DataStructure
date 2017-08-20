#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* nextNode;
};
/*Create node */
Node* CreateNode(int value){
    Node* newNode=new Node();
    newNode->value=value;
    newNode->nextNode=NULL;
    return newNode;
}
/*Insert node to end*/
Node* InsertNode(Node* head,int value){
    Node* newNode=CreateNode(value);
    if(head==NULL){
        head=newNode;
        return head;
    }
    Node* temp=head;
    while(temp!=NULL){
        if(temp->nextNode==NULL){
            temp->nextNode=newNode;
            return head;
        }
        temp=temp->nextNode;
    }
    return NULL;
}

/*Utility function to check has consecutive values*/
bool IsConseqVal(Node* head){
    if(head==NULL || head->nextNode==NULL){
        return false;
    }
    if(head->value==(head->nextNode)->value){
        return true;
    }
    return IsConseqVal(head->nextNode);
    
}

/*Utility function to return max occurance */
int MaxConsCount(Node* head){
    if(head==NULL){
        cout<<"List is empty "<<endl;
        return -1;
    }
    int tempCount=0;int tempVal=head->value;
    int runningCount=0;int runningVal=-1;
    while(head!=NULL){
        if(head->value==tempVal){
            tempCount+=1;
        }
        else{
            if(tempCount>runningCount){
                runningCount=tempCount;
                runningVal=tempVal;
            }
            tempCount=1;
            tempVal=head->value;
        }
        head=head->nextNode;
    }
    return tempCount>runningCount?tempVal:runningVal;
}

/*Utility function to display all node items */
void DisplayNodesVal(Node* head){
    if(head==NULL){
        cout<<"No Element "<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->value<<" ";
        head=head->nextNode;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    head=InsertNode(head,1);
    head=InsertNode(head,2);
    head=InsertNode(head,3);
    head=InsertNode(head,3);
    head=InsertNode(head,3);
    head=InsertNode(head,4);
    head=InsertNode(head,4);
    DisplayNodesVal(head);
    cout<<"Has Conse val : "<<IsConseqVal(head)<<endl;
    cout<<"Max Cons count : "<<MaxConsCount(head)<<endl;
    return 0;
}




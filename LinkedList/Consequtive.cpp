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

Node* lastToFirst(Node* head){
    if(head==NULL || head->nextNode==NULL){
        return  head;
    }
    Node* temp=head;
    while(temp!=NULL){
        if((temp->nextNode)->nextNode==NULL){
            Node* lastNode=temp->nextNode;
            temp->nextNode=NULL;
            lastNode->nextNode=head;
            head=lastNode;
            
            return head;
        }
        temp=temp->nextNode;
    }
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

Node* ReturnFirstOccrAddr(Node* head,int value){
    if(head==NULL){
        cout<<"Empty list"<<endl;
        return NULL;
    }
    while(head!=NULL){
        if(head->value==value){
            return head;
        }
        head=head->nextNode;
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
Node* LocateAndMove(Node* head,int value){
    if(head==NULL || head->nextNode==NULL ){
        cout<<"test"<<endl;
        return head;
    }
    Node* temp=head;
    cout<<"Hed val : "<<temp->value<<endl;
    if(head->value==value){
        head=temp->nextNode;
        temp->nextNode=NULL;
        Node* travel=head;
        while(travel!=NULL){
            if(travel->nextNode==NULL){
                travel->nextNode=temp;
                break;
            }
            travel=travel->nextNode;
        }
        return head;
    }
    bool assign=false;
    Node *prev,*current,*next;
    while(temp!=NULL){
        if(assign==false && (temp->nextNode)->value==value){
            prev=temp;
            current=temp->nextNode;
            next=current->nextNode;
            prev->nextNode=next;
            current->nextNode=NULL;
            assign=true;
        }
        if(temp->nextNode==NULL && assign==true){
            temp->nextNode=current;
            return head;
        }
        temp=temp->nextNode;
    }
    return head;
}



int main(){
    Node* head=NULL;
    head=InsertNode(head,1);
    head=InsertNode(head,2);
    head=InsertNode(head,4);
    head=InsertNode(head,3);
    DisplayNodesVal(head);
    head=lastToFirst(head);
    DisplayNodesVal(head);
    return 0;
}




#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node*next;

    Node() {
       this->prev=NULL;
       this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void  printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
}

int findLength(Node*&head){
    Node* temp = head;
    int len=0;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
      return len;
}

void insertathead(Node*&head,Node*&tail,int data){
    //ll is empty
    if(head==NULL){
       Node*newnode=new Node(data);
       head=newnode;
       tail=newnode;
    }
    else{
        Node* newNode = new Node(data);
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
}

void insertattail(Node*&head,Node*&tail, int data){
    if(head==NULL){
        //empty LL

        //create a newnode
        Node*newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        //non empty ll
   Node* newNode = new Node(data);
   tail->next=newNode;
   newNode->prev=tail;
   tail=newNode;
}
}

void insertatposn(Node*&head,Node*&tail,int data,int pos ){
    if(head==NULL){
        Node*newnode=new Node(data);
        head=newnode;
        tail=newnode; 
    }
    else{
        int len=findLength(head);
        if(pos==1){
            insertathead(head,tail,data);
        }
        else if(pos==len+1){
          insertattail(head,tail,data);

        }
        else{
            Node*newnode=new Node(data);
            Node*prevnode=NULL;
            Node*currnode=head;
            while(pos!=1){
                pos--;
                prevnode=currnode;
                currnode=currnode->next;

            }
            //update pointers
            prevnode->next=newnode;
            newnode->prev=prevnode;
            newnode->next=currnode;
            currnode->prev=newnode;
        }
    }
}

int main(){
   
   Node*tail=NULL;
   Node*head=NULL;

    insertathead(head,tail,50);
      insertathead(head,tail,40);
        insertathead(head,tail,30);
          insertathead(head,tail,20);
    printList(head);
    cout<<endl;
      insertatposn(head,tail,1000,4);
   // insertattail(head,tail,1000);
    printList(head);


}
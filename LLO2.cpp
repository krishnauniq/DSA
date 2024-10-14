#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

Node(){
    this->next=NULL;
}
//constructor
Node(int data){

    cout<<"Here we go!"<<endl;
    this->data=data;
    this->next=NULL;
}
   
~Node(){
    cout<<"Node is being deleted  "<<this->data<<endl;
}   

};

//HAMESA LINK LIST KO PASS KRNE KE LIE TEMP USE KRO
//never use original ptr;

void  printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
}
    cout <<endl;  
}

void insertathead(Node*&head,Node*&tail, int data){
    if(head==NULL){
        //empty LL

        //create a newnode
        Node*newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        //non empty ll
      //create a new node
      Node* newnode=new Node(data);
      //attach new node to head node
      newnode->next=head;
      //update head
      head=newnode; 
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
      //create a new node
      Node* newnode=new Node(data);
      //attach new node to head node
      tail->next=newnode;
      //update head
      tail=newnode; 
}
}

int getlength(Node*head){
    Node*temp=head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void inseratposn(Node*&head,Node*&tail,int data,int position){
    if(position<1){
        cout<<"Invalid position"<<endl;
        return;
    }
    int length=getlength(head);

    if(position==1){
        insertathead(head,tail,data);
    }
    else if(position>length){
        insertattail(head,tail,data);
    }
    else{
        //create
        Node*newnode=new Node(data);
        //traverse
        Node*prev=NULL;
        Node*curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        //attach prev to newnode
        prev->next=newnode;
        //attach newnode to curr
        newnode->next=curr;
    }
}


void deletenode(Node*&head,Node*&tail,int position){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    int len=getlength(head);

    if(head==tail){
          Node*temp=head;
          delete temp;
          head=NULL;
          tail=NULL;
          return ;   
    }

    if (position==1){
          //first node delete
          Node*temp=head;
          head=head->next;
          delete temp;
    }
    else if(position==len){
           //last node delete
           Node*prev=head;
           while(prev->next!=NULL){
            prev=prev->next;
           }
           prev->next=NULL;
           delete tail;
           tail=prev; 
    }

    else{
        //delete middle node
        Node*prev=NULL;
        Node*curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
    }
    //attach prev to curr
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
} 

int main(){
//    // Node* head = new Node(); 

//      Node*first=new Node(10); 
//      Node*second=new Node(20);
//      Node*third=new Node(30); 
//      Node*fourth=new Node(40); 
//      Node*fifth=new Node(50); 
// //link list created
//      first->next=second;
//      second->next=third;
//      third->next=fourth;
//      fourth->next=fifth;

    Node*head=NULL;
    Node*tail=NULL; 
    cout<<"printing entire LL :- "<<endl;
    printList(head);

    insertathead(head,tail,50);
      insertathead(head,tail,40);
        insertathead(head,tail,30);
          insertathead(head,tail,20);
    
     deletenode(head,tail,1);
    printList(head);
    cout<<endl;

    cout<<"before length of LL: "<<getlength(head)<<endl;
    cout<<"before tail "<<tail->data<<endl;

    deletenode(head,tail,1);

    cout<<"after length  of LL: "<<getlength(head)<<endl;
    cout<<"after tail "<<tail->data<<endl;

    // inseratposn(head,tail,1000,51);
    // printList(head);
   // cout<<"Length of LL is "<<getlength(head);

}

  
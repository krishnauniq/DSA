#include<iostream>

using namespace std;

struct node{

    public:
    int data;
    node*next;
  
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
  ~node(){
    int value=this->data;
    //memory free
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is freed for  "<<value<<endl;
  }
};
void insertAttail(node *&tail,int d){
    node*temp=new  node(d);
    tail->next=temp;
    tail=tail->next;

}

void insertAthead(node*  &head,int d){ 
    //new node create
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}

void insertAtmiddle(node*&tail,node*&head,int position,int d){

    if(position==1){
        insertAthead(head,d);
        return;
    }
    node*temp=head;
    int count=1;

    while(count<position-1){
        temp=temp->next;
        count++;
    }
      if(temp -> next == NULL) {
        insertAttail(tail,d);
        return ;
    }
   
    //creating a new node
    node*newnode=new node(d);
    newnode->next=temp->next;
     temp->next=newnode;
}


       //Printing the node
void print(node* &head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

    //deletion node

void deleteNode(int position,node*&head){
       //deleting first node
    if (position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
}
else{  //deleting any midd or last node
      node*curr=head;
      node*prev=NULL;

      int count=1;
      while(count<position){
        prev=curr;
        curr=curr->next;
        count++;
}
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;

}
}

int main() {

    node*node1=new node(10);
    // cout<<node1 ->data<<endl;
    // cout<<node1 ->next<<endl;

    node*head=node1;
    node*tail=node1;
    print(head);
    insertAttail(tail,12);
    print(head);

    insertAttail(tail,54);
    print(head);
    
    insertAtmiddle(tail,head,4,22);
    print(head);

    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;
 
    deleteNode(3,head);
    print(head);

    

}

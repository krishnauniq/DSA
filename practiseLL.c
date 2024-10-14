#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node*newnode(int data){
    struct node*x=(struct node*)malloc(sizeof(struct node));
    x->data=data;
    x->next=NULL;
    return x;
}

void insertatbeg(struct node**head,int data){
    struct node*x=newnode(data);
    x->next=*head;
    *head=x;
}

void insertatend(struct node**head,int data){
    struct node*x=newnode(data);
    if(*head==NULL){
        *head=x;
    }
    struct node*last=*head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=x;
}


void insertAtPosition(struct node** head, int data, int position) {
    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    if (position == 1) {
       insertatbeg(head, data);
        return;
    }

    struct node*current=*head;
    struct node*prev=NULL;
    int count = 1;

    while(current!=NULL && count<position){
        prev = current;
        current = current->next;
        count++;
    }
    if (count < position) {
        printf("Invalid position.\n");
        return;
    }
    struct node*x=newnode(data);
    x->next=current;
    prev->next=x;

}

void deleteatbeg(struct node**head){
    if(*head==NULL){
        printf("List is empty.\n");
}
     struct node*temp=*head;
    *head=(*head)->next;
    free(temp);
    }

void deleteatend(struct node**head){
    if(*head==NULL ||  (*head)->next==NULL){
        printf("List is empty.\n");
        return;
}
struct node*current=*head;
struct node*prev=NULL;
while(current->next!=NULL){
    prev=current;
    current=current->next;
}
prev->next=NULL;
free(current);
}

void print(struct node*head){
   while(head!=NULL){
    printf("%d",head->data);
    head=head->next;
   }
   printf("\n");
}



int main(){
    struct node*head=NULL;
    insertatbeg(&head,6);
    print(head);
    insertatbeg(&head,7);
    insertatend(&head,1);
    insertatend(&head,2);
    insertAtPosition(&head,5,3);
    deleteatbeg(&head);
    print(head);
}
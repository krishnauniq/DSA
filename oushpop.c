// #include<stdio.h>
// #include<string.h>

// typedef struct {
//     char elements[256]; 
//     int top;
// } stack;

// void initialize(stack* s) {
//     s->top = 0;
// }

// void push(stack* s, char c) {
//     s->elements[s->top++] = c;
// }

// char pop(stack* s) {
//     return s->elements[--s->top];
// }


// void reverse(char str[]){
//     int len=strlen(str);
//     stack s;
//     initialize(&s);
//     for(int i=0;i<len;i++){
//         push(&s,str[i]);
// }
// for(int i=0;i<len;i++){
//     str[i]=pop(&s);
// }
// }

// int main(){
  
//     char str[]="hello world";
//     printf("original string : %s\n",str);

//     reverse(str);
//     printf("reversed:%s\n",str);
// }




// #include <stdio.h>
// #define MAX_SIZE 100

// int stack[MAX_SIZE];
// int top = -1;

// // Function to check if the stack is empty
// int isEmpty() {
//     return top == -1;
// }

// // Function to check if the stack is full
// int isFull() {
//     return top == MAX_SIZE - 1;
// }

// // Function to push an element onto the stack
// void push(int x) {
//     if (isFull()) {
//         printf("Stack Overflow\n");
//         return;
//     }
//     top++;
//     stack[top] = x;
// }

// // Function to pop an element from the stack
// int pop() {
//     if (isEmpty()) {
//         printf("Stack Underflow\n");
//         return -1; // Or any suitable error value
//     }
//     int x = stack[top];
//     top--;
//     return x;
// }

// int main() {
//     // Example usage
//     push(1);
//     push(2);
//     push(3);

//     printf("Popped element: %d\n", pop());
//     printf("Popped element: %d\n", pop());

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* top = NULL;

// // Function to check if the stack is empty
// int isEmpty() {
//     return top == NULL;
// }

// // Function to push an element onto the stack
// void push(int x) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = x;
//     newNode->next = top;
//     top = newNode;
// }

// // Function to pop an element from the stack
// int pop() {
//     if (isEmpty()) {
//         printf("Stack Underflow\n");
//         return -1; // Or any suitable error value
//     }
//     struct Node* temp = top;
//     int x = temp->data;
//     top = top->next;
//     free(temp);
//     return x;
// }

// int main() {
//     // Example usage
//     push(1);
//     push(2);
//     push(3);

//     printf("Popped element: %d\n", pop());
//     printf("Popped element: %d\n", pop());

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;
int isempty(){
    return top==NULL;
}

void push(int x){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;

}

int pop(){
    if(isempty()){
        printf("Stack Underflow\n");
        return -1;
    }
    struct node*temp=top;
    int x=temp->data;
    top=top-> next;
    free(temp);
    return x;
}

int main(){
    push(1);
    push(2);
    push(3);

    printf("popped elem is %d\n",pop());
}
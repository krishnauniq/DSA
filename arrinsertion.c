 #include<stdio.h>
// //traversing arr
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d  ",arr[i]);
//     }
//     printf("\n");
// }

// //code for insertion
// // int sortedins(int arr[],int size,int element,int capacity,int index){
// //     if(size>=capacity){
// //         return -1;
// //     }
// //     for (int i = size-1; i >= index; i--)
// //     {
// //         arr[i+1]=arr[i];
// //     }
// //     arr[index]=element;
// //     return 1;
    
// // }

// void deletion(int arr[],int size,int index){
  
//     for (int i = index; i < size; i++)
//     {
//         arr[i]=arr[i+1];
//     }
  
// }


// int main(){
//     int arr[10] = {7,8,12,27,88};
//     int size=5,element=45,index=1;

//     //for insertion
//     // display(arr,size);
//     // int element=45,index=3;
//     // sortedins(arr,size,element,100,index);
//     // size+=1;
//     // display(arr,size);

//     //for deletion
//      deletion(arr,size,index);
//      size-=1;
//      display(arr,size);
//      return 0;

//     }

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int insert(int arr[],int size,int key,int capacity,int index){
    if(size>=capacity){
        return -1;
}
for(int i=size-1;i>=index;i--){
    arr[i+1]=arr[i];
}
arr[index]=key;
return 1;
}

void delete(int arr[],int size,int index){
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4};
int size = 4;
int index=3;
int capacity = 5;
int key = 10;
int index = 2;

insert(arr, size, key, capacity, index);
size+=1;
display(arr,size);

delete(arr,size,index);
size-=1;
display(arr,size);
}

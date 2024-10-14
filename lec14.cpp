 #include<iostream>
 using namespace std;

//pivot--min value of a graph

// int pivotElem(int arr[], int n){

//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){

//         if(arr[mid]>=arr[0])
//         {
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }
int getpivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid]<arr[n-1]){
            e = mid;
        }
        
        else if(arr[mid]>arr[n-1]){
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){

    int arr[5]={3,8,10,17,1};

    cout<<"pivot is "<< getpivot(arr,5)<< endl;
    return 0;
}

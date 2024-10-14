// #include<iostream>
// #include<vector>
// using namespace std;

// int getpivot(vector<int>& arr, int n) {
//     int start = 0;
//     int end = n-1;
    
//     int mid = start + (end-start)/2;
    
//     while(start<end){
//         if(arr[mid]<arr[n-1]){
//             end = mid;
//         }
        
//         else if(arr[mid]>arr[n-1]){
//             start = mid + 1;
//         }
        
//         mid = start + (end-start)/2;
//     }
//     return -1;
// }

// int occur(vector<int>& arr, int s,int e,int key){

//     int start=s,end=e;
//     int mid =start+(end-start)/2;
//     while(start<=end){

//         if (arr[mid]==key){
//            return mid;

//         }
//         else if(key>arr[mid]){
//            start=mid+1;   
//         }
//         else if(key<arr[mid]){
//          end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
//       }

// int findPosition(vector<int>& arr,int n,int k)
// {
//      int pivot =getpivot(arr,n);
//      if(k>=arr[pivot] && k<=arr[n-1])
//      {
//         return occur(arr,0,pivot,n-1);
//      }
//      else{
//         return occur(arr,0,pivot-1,k);
//      }
// }



#include <iostream>
#include <vector>

using namespace std;

int getpivot(vector<int>& arr, int n) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] < arr[n - 1]) {
            start = mid + 1;
        } else if (arr[mid] > arr[n - 1]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1; // Pivot not found
}

int occur(vector<int>& arr, int start, int end, int key) {
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1; // Key not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();

    int pivot = getpivot(arr, n);
    cout << "Pivot index: " << pivot << endl;

    int key = 5;
    int index = occur(arr, 0, n - 1, key);
    cout << "Key index: " << index << endl;

    return 0;
}
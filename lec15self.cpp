#include<bits/stdc++.h>
using namespace std;

//The isPossible function returns a bool value because its purpose is to determine whether it's possible to allocate 
//the books to the given number of students under a specific maximum page limit.If it's possible, the function returns true.

bool ispossible(int arr[],int n,int m,int mid){
     int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allbooks(int arr[], int m,int n){
    int s=0;
    int sum=0;

    if (n<m)
    return -1;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int ans=-1;
    int mid=(e-s)/2;

    while(s<=e)
    {
        if(ispossible(arr,n,m,mid)){
        ans=mid;
        e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int m=2;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = allbooks(arr, m, n);
    cout << "The final answer is " << result << endl;
}



// The given code implements a binary search algorithm to find the minimum number of pages required to allocate books to students. 
//The problem is to allocate books to students such that the maximum number of pages assigned to any student is minimized.

// Here's a breakdown of the code:

// **1. `isPossible(arr, n, m, mid)` function:**

// - Takes an array `arr` of book pages, the number of books `n`, the number of students `m`, and a `mid` value representing the maximum number of pages
// a student can be assigned.
// - Initializes a variable `studentCount` to 1 to represent the first student and a variable `pageSum` to 0 to
// track the total pages assigned to the current student.
// - Iterates through the books:
//     - If the current book's pages can be added to the current student's `pageSum` without exceeding the `mid` value, adds the pages to the `pageSum`.
//     - Otherwise, increments the `studentCount` to assign the book to the next student and resets the `pageSum` to the current book's pages.
//     - If the `studentCount` exceeds `m`, it means more students than available are required to allocate the books with the
// current `mid` value, so the function returns `false`.
// - Returns `true` if all books can be allocated to `m` students without exceeding the `mid` value.


// **2. `allocateBooks(arr, n, m)` function:**

// - Takes the same input as the `isPossible` function.
// - Initializes `s` to 0 (minimum possible pages) and `sum` to the total number of pages.
// - If there are fewer students than books, returns -1 as it's not possible to allocate.
// - Performs binary search between `s` and `sum` to find the minimum `mid` value for which `isPossible` returns `true`.
// - Updates `ans` to the current `mid` if `isPossible` returns `true` and adjusts the search range accordingly.
// - Returns the final `ans` which is the minimum number of pages required to allocate books to students.

// **3. Main function:**
// - Sets up an example array of book pages and the number of students.
// - Calls the `allocateBooks` function and prints the result.

 
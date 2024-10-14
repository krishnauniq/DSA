#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
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

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;

     if (n < m)
        return -1;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
    //Driver Code

int main()
{
    // Number of pages in books
    int arr[] = { 12, 34, 67, 90 };
    int n = sizeof arr / sizeof arr[0];
    int m = 2; // No. of students

    cout << "Minimum number of pages = "
         << allocateBooks(arr, n, m) << endl;
    return 0;
}



// //approach---2

// #include <bits/stdc++.h>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int curr_min)
// {
//     int studentsRequired = 1;
//     int curr_sum = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > curr_min)
//             return false;
//         if (curr_sum + arr[i] > curr_min) {
            
//             studentsRequired++;

//             // update curr_sum
//             curr_sum = arr[i];
//             if (studentsRequired > m)
//                 return false;
//         }

//         // else update curr_sum
//         else
//             curr_sum += arr[i];
//     }
//     return true;
// }

// // function to find minimum pages
// int findPages(int arr[], int n, int m)
// {
//     long long sum = 0;

//     // return -1 if no. of books is less than
//     // no. of students
//     if (n < m)
//         return -1;
//     int mx = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//         mx = max(mx, arr[i]);
//     }

//     int start = mx, end = sum;
//     int result = INT_MAX;

//     while (start <= end) {
       
//         int mid = (start + end) / 2;
//         if (isPossible(arr, n, m, mid)) {

//             result = mid;
//             end = mid - 1;
//         }

//         else
            
//             start = mid + 1;
//     }

    
//     return result;
// }

// // Driver code
// int main()
// {
//     // Number of pages in books
//     int arr[] = { 12, 34, 67, 90 };
//     int n = sizeof arr / sizeof arr[0];
//     int m = 2; // No. of students

//     cout << "Minimum number of pages = "
//          << findPages(arr, n, m) << endl;
//     return 0;
// }

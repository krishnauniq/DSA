#include<bits/stdc++.h>
using namespace std;

    int search(int nums[], int target,int size) {
    int left = 0;
    int right = size-1; // get the last index of the array

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);


    int index = search(nums, target,size);

     if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found." << endl;
    }

     return 0;
 }

//APPROACH-2;  
   
    // int search(vector<int>& nums, int target) {
    //     int s=0;
    //     int e=target-1;
    //     int mid=s+(e-s)/2;

    //     while(s<=e){
    //         if(nums[mid]==target){
    //             return target;
    //         }
    //         else if(nums[mid]<target){
    //            s=mid+1; 
    //         }
    //         else{
    //             e=mid-1;
    //         }
    //     }
    //     return -1;
    // }

    // int main(){
    // int nums[]={-1,0,3,5,9,12};
    //     int target =9;
    //     vector<int> numsVector(nums, nums + sizeof(nums) / sizeof(nums[0]));
    // int index = search(numsVector, target);

    // cout << "the " << index << endl;
    // return 0;
    // }

//};
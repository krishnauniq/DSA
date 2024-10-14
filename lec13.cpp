//Problem1

 #include<iostream>
 using namespace std;

 int occur(int arr[], int n,int key){
int ans=-1;
    int s=0,e=n-1;
    int mid =s+(e-s)/2;
    while(s<=e){

        if (arr[mid]==key){
            ans=mid;

        }
        else if(key>arr[mid]){
           s=mid+1;   
        }
        else if(key<arr[mid]){
         e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
      }
     int main (){
        int even [5]={2,4,6,3,2};
        cout<<"first occurence is  "<<occur(even,5,3)<<endl;
        return 0;
     }
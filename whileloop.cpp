#include <iostream>
 using namespace std;
//sum upto n for even no and prime
int main(){
     
      int n;
      cin>> n;

      int i = 2;
      
    //  int sum=0;

    //  while(i<=n){
    //     sum=sum+i;
    //     i=i+2;
    //  }
    //  cout <<"value of sum is \n"<<sum<<endl;

      while(i<n) {

        if(n%i==0){
            cout<<"not prime for "<<i<<endl;
        }
        else{
            cout<<"prime for "<< i <<endl;
        }
        i=i+1; //to prevent infinite looping
      }

}
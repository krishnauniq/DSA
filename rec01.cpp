#include<iostream>
using namespace std;

//Q1.......// int factorial(int n){
//     //Base case
//     if(n==1)
//     return 1;
//     if(n==0)
//     return 1;

//     //REcursive reln
//    int reckaans=factorial(n-1);

//   //Processing
//    int finalans=n*reckaans;
//    return finalans;
// }

// int main(){
//     cout<<factorial(6)<<endl;

// }

// Q2......
// void print(int n){
//     if(n==1){       //Base case
//         cout<<1<<" ";
//         return;
// }

// cout<<n<<" ";//Processing
// print(n-1); //Recursion call
// }

// int main(){
//     print(5);
// }

//Q3

// int power(int n){
//     //Base case
//     if(n==0)
//     return 1;

//     int ans=2*power(n-1);//processing
//     return ans;    //call
// }

// int main(){
//     cout<<power(3)<<endl;
// }

//Q4

int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    cout<<fib(11)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int factorial(int n){

    if(n==1)
    return 1;

    if(n==0)
    return 1;

    int recans=factorial(n-1);

    int f=n*recans;
    return f;

}
int main(){
    cout<<factorial(10)<<endl;
}
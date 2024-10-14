#include <iostream>
 using namespace std;

 int main(){

    //pattern1

    int n;
     cin>>n;

  //   int i=1;

  //  while(i<=n){

  //   int j = 1;
  //   while(j<=n){
  //       cout<<"*";
  //       j=j+1;
   // }

                     //pattern2

    // int i=1;

    // while (i<=n){
    //     int j=1;
    //     while (j<=n){
    //     cout<<j;
    //     j=j+1;
    // }
    // cout<<"*"<<endl;


//     i=i+1;
//    }

                     //P-3
  // int n;
  // cin>>n;

//   int row=1;

//   while(row<=n){
//     int col=1;
//     while (col<=row)
//     {
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
    
//   }

              //P-4

// int row=1;

// while(row<=n){
//     int col=1;
//     int value=row;
//     while (col<=row){
//         cout<<value;
//     value=value +1;
    
//      col=col+1;
//     }
//  cout<<endl;
//  row=row+1;   
// }

           //P-5

 int row=1;

while (row<=n){
    int col=1;
    while(col<=row){
        cout<<row;
     col=col+1;

    }
    cout<<endl;
    row=row+1;
}
 }
              
 

// C++ code to demonstrate star pattern
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
//     int n = 5;

//     // looping rows
//     for (int i = n; i > 0; i--) {
//         for (int j = 1; j <= n; j++) // looping columns
//         {
//             if (j >= i) {
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


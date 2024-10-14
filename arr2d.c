#include <stdio.h>

int main(){

    int matrix[2][3]={1,2,32,23,3,4};

    printf("element at (2,2):%d\n",matrix[1][2]);

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        
    }
    printf("\n");
    }
}
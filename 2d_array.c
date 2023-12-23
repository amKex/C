#include <stdio.h>

int main(){
    // 2*3 array for student marks storing
    int arr[2][3] = {{23,33,45},{67,77,87}};

    //accessing elements in a 2d array
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("values at [%d][%d] > %d \n",i, j, arr[i][j]);
        }
    }

    return 0;
}
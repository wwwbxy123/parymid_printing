/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
int main(){
    int row = 4;
    int k = 1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
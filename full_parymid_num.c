/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

#include <stdio.h>
int main(){
    int row = 5;
    for(int i = 0; i < row; i++){
        for(int j = 0; j <= row + i; j++){
            int k = 1;
            while(j < row - i){
                printf("  ");
                j++;
            }
            while(j <= row){
                printf("%d ", k+i);
                j++;
                k++;
            }
            while(j <= row + i){
                printf("%d ",k);
                j++;
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}
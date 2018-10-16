/*
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 
*/

#include <stdio.h>
int main(){
    int row = 5;
    for(int i = 0; i < row; i++){
        for(int j = 0; j <= row + i; j++){
            while(j < row -i){
                printf("  ");
                j--;
            }
            
        }
        printf("\n");
    }

    return 0;
}
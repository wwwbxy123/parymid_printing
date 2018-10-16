/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <stdio.h>
int main(){
    int row = 5;
    for(int i = row; i > 0; i--){
        for(int j= 0; j < row + i; j++){
            while(j <= row - i){
                printf("  ");
                j++;
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
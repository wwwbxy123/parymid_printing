/*
* * * * *
* * * *
* * * 
* *
*

*/

#include <stdio.h>
int main(){
    int row = 5;
    for(int i = row; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int i , j ;
    scanf("%d %d",&i,&j);
    int data[i][j] ;
    int password[j] ;
    for(int x = 0 ; x < i ; x++){
        for(int y = 0 ; y < j ; y++){
            scanf("%d",&data[x][y]) ;
        }
    }

    for(int x = 0 ; x < i-1 ; x++){
        int oldValuej = 0 ;
        int row = x ;
        for(int y = 0 ; y < j ; y++){
            oldValuej = data[x][y] ;
            if(row == 0){
                password[y] = data[row + 1][oldValuej - 1] ;
            }else {
                password[y] = data[row + 1][password[y] - 1] ;
            }
            
            // printf("%d ",password[y]) ;
        }
        // printf("\n");
    }

    for(int x = 0 ; x < j ; x++){
        printf("%d ",password[x]);
    }
}
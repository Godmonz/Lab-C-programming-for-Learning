#include <stdio.h>

int main(){
    int n = 0 ;
    scanf("%d",&n) ;
    int farm[n][n] ;
    int temp[n] ;
    int max = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&farm[i][j]) ;
        }
    }
    for(int i = 0 ; i < n ; i++){// i = roll
        for(int x = 0 ; x < n ; x++){
            temp[x] = 0 ;
        }
        for(int j = i; j < n ; j++){// j = column
            int sum = 0 ;
            for(int x = 0 ; x < n ; x++){
                temp[x] += farm[x][j] ;
            }
            for(int x = 0 ; x < n ; x++){
                sum += temp[x] ;
                if(sum < 0){
                    sum = 0 ;
                }   
            }
            if(sum > max){
                max = sum ;
            }
        }
    }
    printf("%d\n",max) ;
}
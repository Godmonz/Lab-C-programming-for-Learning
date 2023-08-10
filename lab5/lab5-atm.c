#include <stdio.h>

int main(){
    int n = 0 , x = 0 , q = 1 , index = 0;
    scanf("%d %d",&n,&x);
    int left = n ;
    int withdraw[n] ;
    int tmp ;
    int queue[n] ;
    for(int i = 0 ; i < n ; i++){
        int money , times ;
        scanf("%d",&money);
        withdraw[i] = money ;
        queue[i] = 0 ;
    }
    /* Calculator Times of withdraw each one*/
    while(withdraw[0] != 0){
        withdraw[0] -= x ;
        if(withdraw[0] <= 0 ){
            queue[index] = q ;
            for(int j = 1 ; j <= left ; j++){
                if(j == left){
                    withdraw[j-1] = 0;
                    break ;
                }
                tmp = withdraw[j] ;
                withdraw[j-1] = tmp ;
            }
            left-- ;
            index++ ;
        }else if (withdraw[0] > 0){
            int now = withdraw[0] ;
            for(int j = 1 ; j <= left ; j++){
                if(j == n){
                    withdraw[j-1] = now ;
                    break ;
                }
                tmp = withdraw[j] ;
                withdraw[j-1] = tmp ;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d ",queue[i]) ;
    }
}
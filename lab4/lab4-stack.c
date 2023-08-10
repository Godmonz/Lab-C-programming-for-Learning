#include <stdio.h>

int main(){
    int command = 0 , n = 0 , number = 0 , j = 0;
    scanf("%d",&n) ;
    int list[n] ;
    int ans[n] ;
    for(int i = 0 ; i < n ; i++){
        list[i] = 0 ;
    }
    for(int i = 0 ; i < n ; i++){
        int temp = 0 ;
        int data = 0 ;
        scanf("%d",&command);
        if(command == 1){
            scanf("%d",&data) ;
            for(int i = 0 ; i <= number ; i++){
                temp = list[i] ;
                list[i] = data ;
                data = temp ;
            }
            number += 1 ;
        }else if(command == 2){
            if(number > 0){
                for(int i = 1 ; i <= number ; i++){
                    if(i == number){
                        list[i-1] = 0 ;
                    }
                    temp = list[i] ;
                    list[i-1] = temp ;
                }
                number -= 1 ;
            }
        }else if(command == 3){
            if(list[0] == 0){
                ans[j] = -1 ;
                j++ ;
            }else{
                ans[j] = list[0] ;
                j++ ;
            }
        }else if(command == 4){
            ans[j] = number ;
            j++ ;
        }

    }
    for(int i = 0 ; i < j ; i++){
        if(ans[i] == -1){
            printf("EMPTY\n") ;
        }else{
            printf("%d\n",ans[i]) ;
        }
    }
}

//test
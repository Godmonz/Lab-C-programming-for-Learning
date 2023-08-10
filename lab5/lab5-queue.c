#include <stdio.h>

int main(){
    int n = 0 , command = 0 , number = 0 , j = 0 ;
    scanf("%d",&n) ;
    int queue[n] ;
    int ans[n] ;
    for(int i = 0 ; i < n ; i++){
        int temp = 0 ;
        int data = 0 ;
        scanf("%d",&command);
        if(command == 1){
            scanf("%d",&data);
            queue[number] = data ;
            number++ ;
        }else if(command == 2){
            if(number > 0){
                for(int i = 0 ; i <= number ; i++){
                    if(i == number){
                        queue[i-1] = 0;
                        break;
                    }
                    temp = queue[i] ;
                    queue[i-1] = temp ;
                }
                number-- ;
            }
        }else if(command == 3){
            if(queue[0] != 0){
                ans[j] = queue[0] ;
                j++ ;
            }else{
                ans[j] = -1 ;
                j++ ;
            }
        }else if(command == 4){
            ans[j] = number ;
            j++ ;
        }
    }
    for(int i = 0 ; i < j ; i++){
        if(ans[i] == -1){
            printf("EMPTY\n");
        }else{
            printf("%d\n",ans[i]);
        }
    }
}
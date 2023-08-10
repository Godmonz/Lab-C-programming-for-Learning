#include <stdio.h>
int main(){
    int n = 0 ;
    scanf("%d",&n) ;
    int height[n]  ;
    int wire = 0 ;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&height[i]) ;
    } 
    for(int i = 0 ; i < n ; i++){
        int check = 0 ;
        for(int j = i+1 ; j < n ; j++){
            if(j - i == 1){
                wire += 1 ;
            }
            else if(height[i] <= check){
                break ;
            }
            else if(height[j] > check){
                wire += 1 ;
            }
            if(check <= height[j]){
                check = height[j] ;
            }
        }
    }
    printf("%d\n" , wire) ;
}
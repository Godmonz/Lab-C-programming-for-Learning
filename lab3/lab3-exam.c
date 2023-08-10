#include <stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    double score[n][3] , avg[3] , totalscore[n] , totalmean;
    double totalall = 0 ;
    int checkzero[n] , pass[n];
    // input
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%lf",&score[i][j]);
        }
    }
    // cal Average each subject
    for(int i = 0 ; i < 3 ; i++){
        double average = 0 ;
        for(int j = 0 ; j < n ; j++){
            average += score[j][i] ; 
        }
        avg[i] = average / n ;
    }
    // check if score equal 0
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(score[i][j] == 0){
                checkzero[i] = 1 ;
                break ;
            } else {
                checkzero[i] = 0 ;
            }
        }
    }
    // total score
    for(int i = 0 ; i < n ; i++){
        double total = 0 ;
        for(int j = 0 ; j < 3 ; j++){
            total += score[i][j];
            totalall += score[i][j] ;
        }
        totalscore[i] = total ;
    }
    totalmean = totalall / n ;
    //check pass
    for(int i = 0 ; i < n ; i++){
        int count = 0 ;
        for(int j = 0 ; j < 3 ; j++){
            if(score[i][j] >= avg[j]){
                count += 1 ;
            }
        }
        // printf("%d\n",count) ;
        if(count >= 2 && checkzero[i] == 0 && totalscore[i] >= totalmean){
            printf("%d ",i+1) ;
        }
    }


}
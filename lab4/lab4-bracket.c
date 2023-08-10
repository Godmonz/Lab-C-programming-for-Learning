#include <stdio.h>
#include <string.h>

int main(){
    char data[2000] ;
    scanf("%s",data) ;
    int nl = 0  ;
    int nr = 0 ;
    int length = strlen(data) ;
    //check bracket
    for(int i = 0 ; i < length ; i++){
        if(data[i] == ')' && i == 0){
            break;
        }
        if(data[i] == '('){
            nl += 1 ;
        } else {
            nr += 1 ;
        }
    }

    //output
    if(nr == nl && nr != 0 && nl != 0){
        printf("YES\n") ;
    }else{
        printf("NO\n") ;
    }
}
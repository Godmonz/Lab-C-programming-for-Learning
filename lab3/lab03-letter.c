#include <string.h>
#include <stdio.h>

int main(){
    char str[102] ;
    char n[102]  ;
    scanf("%[^\n]%*c",str) ;
    int i = 0 ;
    int j = 0 ;
    int length = strlen(str) ;
    for(;  i < length; ){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            n[j] = str[i] ;
            j++ ;
            i += 3 ;
        }
        else{
            n[j] = str[i] ;
            j++;
            i += 1 ;
        }
    }
    n[j] = '\0' ;
    printf("%s\n",n);
}
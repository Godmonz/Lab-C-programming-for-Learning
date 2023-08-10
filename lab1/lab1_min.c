#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    start = clock();
    int n ,data , minn , maxx ;
    scanf("%d",&n) ;
    scanf("%d",&data) ;
    maxx = data ;
    minn = data ;
    for(int i = 1 ; i < n ; i++){
        scanf("%d",&data) ;
        if(data > maxx){
            maxx = data ;
        }
        else if(data < minn){
            minn = data ;
        }
    }
    printf("%d\n%d\n",minn,maxx) ;
    end = clock();
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("%f",duration) ;
}
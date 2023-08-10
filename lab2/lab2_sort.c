#include <stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *nextPtr ;
}Node;

Node *firstNode ;

void sort(int data,int i){
    Node *temp ;
    Node *currentNode ;

    currentNode = firstNode ;

    for(int x = 0 ;x < i ; x++){
        
    }
    
}

void show(int i){

}

int main(){
    int i = 1 ;
    int data = 0 ;
    Node *current = (Node *)malloc(sizeof(Node)) ;
    scanf("%d",data) ;
    current->data = data ;
    current->nextPtr = NULL ;
    for(i;data != -1 ; i++){
        scanf("%d",data);
        sort(data,i) ;
    }
    show(i) ;
}
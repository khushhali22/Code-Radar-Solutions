#include <stdio.h>
int main() {
    int sc,cc;
    scanf("%d %d",&sc,&cc);
    if(cc>sc){
        printf("Loss");
    }
    else if(cc<sc){
        printf("Profit");
    } 
    else if(sc==cc){
        printf("No Profit No Loss");
    }
    return 0;
}
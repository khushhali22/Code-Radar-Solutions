#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int f=0;
    for(int i=0 ; i<n  ;i++){
        if(x[i]==0 || x[i]==1){
            f=1;
        }
        else{
            break;
        }
    } 
    if(f==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
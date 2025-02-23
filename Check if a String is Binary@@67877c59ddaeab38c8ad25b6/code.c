#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    if(x=="\0"){
        printf("Yes");
        return 0;
    }
    int f=0;
    int i=0;
    while(x[i]!='\0'){
        if(x[i]=='0' || x[i]=='1' || x[i]=='\0'){
            f=1;
        }
        else{
            f=0;
            break;
        }
        i++;
    } 
    if(f==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
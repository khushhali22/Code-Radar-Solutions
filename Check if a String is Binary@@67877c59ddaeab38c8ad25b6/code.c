#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int f=0;
    int i=0;
    while(x[i]!='\0'){
        if(x[i]=='0' || x[i]=='1' || x[i]==' '){
            f=1;
        }
        else{
            f=0;
            break;
        }
        i++;
    } 
    if(f==1 || x[100]==' '){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
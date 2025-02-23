#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    char y[10];
    scanf("%c",y);
    for(int i=0 ; i<n ; i++){
        if(x[i]=='a'  || x[i]=='e'  || x[i]=='i'  || x[i]=='o'  || x[i]=='u'  || x[i]=='A'  || x[i]=='E'  || x[i]=='I'  || x[i]=='O'  || x[i]=='U' )
        {
            printf("%c",y);
        }
        else
        printf("%c",x[i]);
    }
        return 0;
}
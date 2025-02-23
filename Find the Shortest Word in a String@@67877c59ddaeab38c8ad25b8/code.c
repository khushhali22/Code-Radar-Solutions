#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0;
    int min=100;
    char y;
    int p;
    while(x[i]!='\0')
    {
        int j=0;
        int c=0;
        while(x[j]!=' ')
        {
            c++;
            j++;
        }
        if(min>c){
            min=c;
           p=j;
        }
        i++;
    }
    // for(int q=0 ; q<p  ; q++){
        printf("%d",p);
    // }
    // printf("%d",min);
}
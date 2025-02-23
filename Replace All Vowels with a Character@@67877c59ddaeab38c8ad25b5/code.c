#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    char y;
    scanf("%c",&y);
    printf("%c\n",y);
    int l=strlen(x);
    for(int i=0 ; i<l ; i++){
        if(x[i]=='a'  || x[i]=='e'  || x[i]=='i'  || x[i]=='o'  || x[i]=='u'  || x[i]=='A'  || x[i]=='E'  || x[i]=='I'  || x[i]=='O'  || x[i]=='U' )
        {
            printf("%c",y);
        }
        else
        printf("%c",x[i]);
    }
        return 0;
}
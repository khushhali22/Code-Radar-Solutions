#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    char x[100];
    int l=strlen(x);
    int max=INT_MIN;
    int m;
    scanf("%[^\n]c",x);
    for(int i=0 ; i<l ; i++){
        int c=0;
        for(int j=0 ; j<l ; j++){
            if(x[i]==x[j]){
                c++;
            }
        }
        if(max<=c){
            max=c;
            m=i;
            printf("%d",m);
        }
        // printf("%d",m);

    }
    printf("%c",x[m]);
}
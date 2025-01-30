#include <stdio.h>
int main() {
    int c=0;
    char x[100];
    scanf("%s",x);
    char vowel[10]="AEIOUaeiou";
    int n=0,i=0;
    while(x[i]!='\0'){
        n++;
    }
    for(i=0 ; i<n ;i++){
        for(int j=0 ; j<10 ; j++){
            if(x[i]==vowel[j]){
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
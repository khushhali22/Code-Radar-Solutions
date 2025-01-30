#include <stdio.h>
int main() {
    int c=0;
    char x[100];
    scanf("%s",&x);
    char vowel[10]"AEIOUaeiou";
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<10 ; j++){
            if(x[i]==vowel[j]){
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
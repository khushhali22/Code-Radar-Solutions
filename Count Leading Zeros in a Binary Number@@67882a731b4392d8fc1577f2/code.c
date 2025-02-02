#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("32");
        return 0;
    }
    else{
        int c=0;
        for(int i=31 ; i>0 ; i--){
        if(n&(1<<i)){
            break;
            c++;
            printf("%d",c);
            }
        }
        printf("%d",c);
    }

    return 0;
}
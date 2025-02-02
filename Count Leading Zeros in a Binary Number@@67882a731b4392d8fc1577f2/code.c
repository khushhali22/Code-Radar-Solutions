#include <stdio.h>
int main() {
    int n;
    int c=0;
    scanf("%d",&n);
    if(n==0){
        printf("32");
        return 0;
    }
    else{
        for(int i=31 ; i>=0 ; i++){
            if(n&(1<<i)){
                break;
                c++;
            }
        }
        printf("%d",c);
    }

    return 0;
}
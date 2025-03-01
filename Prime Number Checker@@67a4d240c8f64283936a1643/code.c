#include <stdio.h>
    int isPrime(int num){
        int f=1;
        for(int i=2; i<num ; i++){
            if(num%i!=0){
               f=0;
               return f;
            }
        }
        return f;
    }
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0
}
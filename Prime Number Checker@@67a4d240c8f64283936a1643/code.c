#include <stdio.h>
int main(){
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
    int t;
    scanf("%d",&n);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
}
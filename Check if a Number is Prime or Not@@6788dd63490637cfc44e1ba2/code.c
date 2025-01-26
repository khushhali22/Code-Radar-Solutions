#include <stdio.h>
int main() {
    int a;
    int f=1;
    scanf("%d",&a);
    for(int i=2 ;i<a ; i++){
        if(a%i==0){
            f=0;
            break;
        }
    }
    if(f==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
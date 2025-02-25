#include<stdio.h>
#include<string.h>
void sort (char x[]){
    int n=strlen(x);
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ;j++){
            if(x[i]>x[j]){
                char temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}
int main(){
    char x[100],y[100];
    scanf("%[^\n]c",x);
    scanf("%[^\n]c",y);
    sort(x);
    sort(y);
    if(strcmp(x,y)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
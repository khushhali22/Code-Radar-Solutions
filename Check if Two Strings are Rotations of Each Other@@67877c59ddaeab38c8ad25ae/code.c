#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    char y[100];
    scanf(" %[^\n]c",y);
    char temp[2*strlen(x)+1];
    int a=strlen(x);
    int b=strlen(y);
    if(a!=b){
        printf("No");
        return 0;
    }
    int i=0;
    for(i=0 ; x[i]!='\0' ; i++){
            temp[i]=x[i];
    }
    for(int j=0 ; x[j]!='\0' ; j++){
        temp[i+j]=x[i];
    }
    int f=1;
    for(int j=0 ; j<2*=a-b ; j++)
    {
        f=1;
        for(int k=0 ; y[k]!='\0' ; k++)
        {
            if(temp[j+k]!=y[k])
            {
                f=0;
               break;
            }
        }
        if(f==1){
            printf("Yes");
            return 0;
        }
    }
    
        printf("No");
        return 0 ;
}
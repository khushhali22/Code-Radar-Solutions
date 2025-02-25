#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    char str[100];
    int k=0,j=0;
    char newstr[k][j];
    scanf("%[^\n]c",str);
    for(int i=0 ; i!='\0' ;i++){
         if(x[i]==' '){
              k++;
              j=0;
         }
         else{
            newstr[k][j]=str[i];
            j++;
         }
    }
    int max=INT_MIN;
    int index=0;
    for(int i=0 ; i<=k ; i++){
          if(max<strlen(newstr[i]));
          max=strlen(newstr[i]);
          index=i;
    }
    print("%s",newstr[index]);
    
    return 0;
}
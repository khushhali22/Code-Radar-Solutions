#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0;
    while(x[i]!='\0'){
          if(x[i]=='a' || x[i]=='e' ||x[i]=='i' ||x[i]=='o' ||x[i]=='u' ||x[i]=='A' ||x[i]=='E' ||x[i]=='I' ||x[i]=='O' ||x[i]=='U' || x[i]==' ' || isdigit(x[i])){

          printf("%c",x[i]);
          }
        //   else{
        //     continue;
        //   }
          i++; 
    }
    return 0;

}

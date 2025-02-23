#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0;
    while(i!='\0'){
          if(x[i]=='a' || x[i]=='e' ||x[i]=='i' ||x[i]=='o' ||x[i]=='u' ||x[i]=='A' ||x[i]=='E' ||x[i]=='I' ||x[i]=='O' ||x[i]=='U' || x[i]==' '){

          printf("%s",x[i]);
          }
          else{
            continue;
          }
    }
    return 0;

}

#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    int left=0, right=0;
    for(int i=0 ; str[right]!='\0' ; i++){
        if(str[right]==' ' || str[right+1]=='\0'){
             while(left<right){
                char temp=str[left];
                str[left]=str[right];
                str[right]=str[left];
                left++;
                right--;
             }
            //  left=right+1;
        }
        else{
            right++;
        }
    }
    printf("%s",str);
}
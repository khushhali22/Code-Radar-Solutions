#include <stdio.h>
int main() {
   int n;
   int f=1;
   scanf("%d",&n);
   int arr[n],temp[n];
   for(int i=0 ; i<n ;i++){
      temp[i]=arr[n-i-1]
   }
   for(int i=0 ; i<n ;i++){
    if(temp[i]==!arr[i]){
        f=0;
        break;
    }
   }
   if(f==1){
    printf("YES");
   }
   else{
    printf("NO");
   }
    return 0;
}
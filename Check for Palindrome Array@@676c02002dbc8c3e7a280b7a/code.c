#include <stdio.h>
int main() {
   int n;
   int f=1;
   scanf("%d",&n);
   int arr[n];
   for(int i=0 ; i<n/2 ;i++){
      if(arr[i]!=arr[n-i-1]){
               f=0;
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
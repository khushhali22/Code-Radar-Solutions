void fibonaccciSeries(int n){
    if(n==1){
        printf("%d ",0);
    }
    if(n==2){
        printf("%d %d ",0,1);
    }
    if(n>2){
    int a=0;
    int b=1;
    printf("%d %d ",0,1);
    for(int i=2 ; i<n ; i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    }
}
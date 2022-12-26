#include<stdio.h>

int factorial(int n){
    int i,f;
    f=1;
    for(i=2;i<=n;i++){
        f=f*i;
    }

    return  f;
}

int  main(){
    int n;
    scanf("%d",&n);
    printf("factorial %d=%d",n,factorial(n));



    return 0;
}
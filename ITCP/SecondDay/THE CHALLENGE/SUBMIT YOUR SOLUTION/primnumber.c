#include<stdio.h>

 int prime(int n){
    int i,p;
    p=1;
    for (i=1;i<n;i++){
        if(n%i==0){
            p=0;
        }
    }
return p;

 }

int main(){
    int n;
    scanf("%d",&n);

    if(prime(n)){
        printf("it is a prime ,number");
        
            }else {
                printf("it is not aprime number ");
            }



    return 0;
}
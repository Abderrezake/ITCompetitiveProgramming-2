#include<stdio.h>






int main(){
    int n,a,i,b;
    scanf("%d  %d %d",&n ,&a ,&b);
    for(i=0;i<n;i++){
        if(a%i==0){
            printf("it");
        }
        if(b%i==0){
            printf("ccc");
        }


    }



    return  0;
}
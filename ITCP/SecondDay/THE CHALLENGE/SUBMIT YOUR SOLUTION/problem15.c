#include<stdio.h>

    int something(int T[],int n){
        int i,howmany;
        howmany=0;
        for (i=0;i<n;i++){
            if(T[i]<T[i+1]){
                howmany=howmany+1;

            }
        }
        return howmany;

    }


int main(){
        int T[10];
        int n,i;

        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&T[i]);


        }
        printf("ther is %d ",something(T,n));

    return 0;
}
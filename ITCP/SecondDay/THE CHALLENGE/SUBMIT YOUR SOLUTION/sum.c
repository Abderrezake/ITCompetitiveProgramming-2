#include<stdio.h>

    int add(int n,int n2){
        int sum;
        sum =n+n2;

        return sum;

    }




int main(){

    int n,n2;
    scanf("%d  %d",&n ,&n2);
    add(n,n2);
    printf("%d",add(n,n2));




    return 0;
}
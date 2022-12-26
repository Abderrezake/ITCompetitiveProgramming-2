 #include<stdio.h>




    int sum(int n){
    int i,sum;  
    sum=0;
    for(i=0;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }

    }

    }




 int main(){
    int n;
    scanf("%d",&n);
    if(sum(n)==n){
        printf("its a perfect number");
    }


    return 0;
    }
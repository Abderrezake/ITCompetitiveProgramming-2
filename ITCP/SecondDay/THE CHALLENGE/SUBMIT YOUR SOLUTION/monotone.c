#include<stdio.h>

    int montone(int T1[],int n){
        int stillmonoton,i;
        i=1;
        if(T1[0]<T1[1]){
            
        do
        {
           
                if(T1[i]<T1[i+1]){
                    stillmonoton=1;

                }else {stillmonoton=0;}
            
            i=i+1;

            
        } while (stillmonoton=1&&i<n);
        }
        
        return stillmonoton;
    }


int main(){

int T[50];
int n,i;
scanf("%d",&n);

     for(i=0;i<n;i++){
    scanf("%d",&T[i]);
    }
    if(montone(T,n)){
        printf("T is monoton");
    }else{printf("T isn't monoton");}




    return 0;
}
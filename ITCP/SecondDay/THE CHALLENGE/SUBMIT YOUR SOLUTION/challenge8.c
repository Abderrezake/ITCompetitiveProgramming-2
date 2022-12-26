#include<stdio.h>


void split(int n,int *m,int *k){
    int i,foundit;
    foundit=0;
    i=2;
        do{
            if(n%i==0){
                *k=i;
                *m=n/i;
                foundit=1;                


            }



    }while (i<n&&foundit==0);
    
        
    

}

int  main(){
    int m,j,k,i,a,n;
    int V[100];
    int T [100][100];
    scanf("%d",&n);
    split(n,&m,&k);
    printf("M=%d,,N=%d",m,k);
    a=0;
    for(i=0;i<k;i++){
        for(j=0;j<m;j++){
            T[i][j]=V[a];
            a=a+1;


        }
        a=a+1;
    }




    return 0;
}
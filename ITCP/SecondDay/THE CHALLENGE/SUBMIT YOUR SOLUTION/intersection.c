#include<stdio.h>



    int intersection(int T1[],int T2[],int n ,int n2){
        int i,c,j;
        int  T3[n];
        c=0;
        for(i=0;i<n&&i<n2;i++){
            for(j=0;j<n2;j++){
            if(T1[i]==T2[j]){
                T3[c]=T1[i];
                c=c+1;

            }
            }
        }


    }


int main(){
    int T1[50];
    int T2[50];
    int n1,n2,i;
    scanf("%d  %d",&n1,&n2);
    for(i=0;i<n1;i++){
    scanf("%d",&T1[i]);
    }
     for(i=0;i<n2;i++){
    scanf("%d",&T2[i]);
    }
    intersection(T1,T2,n1,n2);




    return 0;
}
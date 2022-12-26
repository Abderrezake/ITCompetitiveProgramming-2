#include<stdio.h>
#include<string.h>



    char reverse(char T[]){
        int i;
        char p;
        for(i=0;i=i/2;i++){
            p=T[i];
            T[i]=T[strlen(T)-i];
            T[strlen(T)-i]=p;

        }
        return T;

    }




int main(){




    return 0;
}
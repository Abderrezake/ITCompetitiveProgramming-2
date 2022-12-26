#include<stdio.h>
#include<string.h>




int main(){

    char S1[50];
    char S2[50];

    scanf("%s %s  ",&S1,&S2);
    if(strcmp(S1,S2)==0){
        printf("they're anagrams ");
    }else {
        printf("they aren't");
    }

    return 0;
}
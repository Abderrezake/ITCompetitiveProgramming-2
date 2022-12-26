#include<stdio.h>
#include<string.h>
#include<math.h>

int factorial(int n){
    int i,c;
    c=1;
    for (i=1;i<n+1;i++){
            c=c*i;
    }
    if(n==0){
        c=1;
    }


        return c;
}
int main(){
    char S[50];
    char S2[50];
    char P1[50];
    char P2[50];
    int i,c,L,L2,SCORE1,score2;

    scanf("%s",&S);
    scanf("%s",&S2);
    printf("enter how many diffrent letters there is in the wordn one and two");
    scanf("%d  %d",&L,&L2);

    printf("player 1 turn");
    printf("this is your word%s",S);
    SCORE1=0;
    score2=0;
            
            for(i=0;i<(factorial(strlen(S))/(factorial(L)*factorial(strlen(S)-L)));i++){

                scanf("%s",&P1);
                if(P1[0]!='e'||P1[0]!='a'||P1[0]!='y'||P1[0]!='u'||P1[0]!='o'||P1[0]!='i'){
                        SCORE1=SCORE1+1;


                }


            }
    printf("player 2 turn");
    printf("this is your word%s",S2);
     
            for(i=0;i<(factorial(strlen(S2))/(factorial(L2)*factorial(strlen(S2)-L2)));i++){

                scanf("%s",&P1);
                if(P1[0]!='e'||P1[0]!='a'||P1[0]!='y'||P1[0]!='u'||P1[0]!='o'||P1[0]!='i'){
                        score2=score2+1;


                }


            }




    return 0;
}
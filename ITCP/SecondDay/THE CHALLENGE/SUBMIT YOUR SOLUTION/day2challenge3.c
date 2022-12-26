#include<stdio.h>
#include<stdlib.h>



int main(){
    int year;


    scanf("%d",&year);

    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        printf("the year is leap year");

    }else {printf("this isn't a leap year");
    }




    return 0;
}
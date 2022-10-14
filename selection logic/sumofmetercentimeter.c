#include<conio.h>
#include<stdio.h>
void main(){

    int m,cm,m1,cm1,m2,cm2;
    printf("Enter the first meter value::");
    scanf("%d %d",&m1,&cm1);
    printf("Enter the second meter value::");
    scanf("%d %d",&m2,&cm2);

    m = m1 + m2;
    cm = cm1 + cm2;

    if(cm >= 100){
        m = m + (cm/100);
        cm = (cm%100);
       
    }
    

    printf("The sum of enter two value is %d meter %d cm" ,m,cm);
}

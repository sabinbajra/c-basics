#include <stdio.h>

void main()
{
    int no1,no2,no3,max;

    printf("Enter the number 1::");
    scanf("%d",&no1);
    printf("Enter the number 2::");
    scanf("%d",&no2);
    printf("Enter the number 3::");
    scanf("%d",&no3);

    if(no1>no2 && no1 >no3){
        max = no1;
    }
    else if(no2>no3){
        max = no2;
    }
    else{
        max = no3;
    }

    printf("The maximum number is %d",max);
}
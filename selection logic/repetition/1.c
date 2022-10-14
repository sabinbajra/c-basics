#include<conio.h>
#include<stdio.h>
void main(){
    float avg;
    int num, sum=0,count =0;
    printf("Enter a number:: 0 for exit::");
    scanf("%d",&num);

    while(num!=0){
        count ++;
        sum = sum + num;
        printf("Enter a number:: 0 for exit::");
        scanf("%d",&num);
    }

    if(count == 0){
        printf("No numbere were entered::");
    }
    else{
        avg = (float)sum/count;
        printf("\n\n%d number entererd. \n\n",count);
        printf("The sum of entered num is %d\nThe average is %.2f", sum,avg);

    }

    }
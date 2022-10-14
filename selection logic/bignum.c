#include<conio.h>
#include<stdio.h>
void main(){
    float avg;
    int num, sum=0,count =0,max,min;
    printf("Enter a number:: 0 for exit::");
    scanf("%d",&num);
    max = min = num;
    while(num!=0){
        if(max < num)
            max = num;
        if(min > num)
            min = num;
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
        printf("The sum of entered num is %d\nThe average is %.2f\nThe maximum value is %d\nThe minimum value is %d", sum,avg,max,min);

    }

    }
#include<stdio.h>

//function declarations
int read_number(int * array,int * sum){
    int i=-1;
    *sum = 0;
    do
        {
            i++;
            printf("Enter number (0 to end)::");
            scanf("%d",&array[i]);
            *sum += array[i];
        }while(array[i]!=0);
return i;    
}

float calc_average(int count, int sum){
    float average;
    average = (float)sum/count;
    return average;
}

void display_array(int * array, int count){
    for(int i=0;i<count;i++){
            printf("a[%d] ",array[i]);
        }
}

int main(){

    int a[10],count=0,sum=0;

    count = read_number(a,&sum);
    float average = calc_average(count,sum);
    printf("%d number entered::\nSum of number entered:: %d\nAverage:: %f\n\nThe entered number are:: \n",count,sum,average);
    display_array(a,count);   
return 0;
}
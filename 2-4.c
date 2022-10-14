#include <stdio.h>
void main(){
    int a,b,c;
    double avg;

    printf("Enter three numbers::");
    scanf("%d %d %d",&a,&b,&c);

    avg = (a+b+c)/3.0;
    printf("The average is %.2f",avg);
}
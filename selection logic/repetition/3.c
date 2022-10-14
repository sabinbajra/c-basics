#include<stdio.h>
int main(){
int x;
printf("Enter the number of times to print hello::");
scanf("%d",&x);
for (int i = 1; i <= x; i++)
printf("%d. Hello\n",i);

    return 0;
}
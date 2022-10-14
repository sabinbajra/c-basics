
#include<stdio.h>

void print_table(int num)
{
for (int i = 1; i <= 10; i++)
printf("%3d x %3d = %3d\n",num,i,num*i);
}


int main(){
int num;
printf("Enter the number:");
scanf("%d",&num);
print_table(num);

    return 0;
}
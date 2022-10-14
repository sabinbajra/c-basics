#include<conio.h>
#include<stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i=2;i<=num;i++)
    {
        fact = fact * i;
    }
return fact;
}

int main(){
int num;
printf("Enter the number to find the factorial::");
scanf("%d", &num);

printf("The factorial of number %d is %d",num,factorial(num));
    return 0;
}

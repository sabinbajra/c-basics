#include<conio.h>
#include <stdio.h>
void main(){
    int a,b,c;
    
    printf("Enter two numbers::");
    scanf("%d %d",&a,&b);

    printf("A:: %d \nB:: %d",a,b);
    printf("\n\nSwapping");
    getch();

    c = a;
    a = b;
    b = c;
    printf("\n\nAfter swapping::\nA:: %d \nB:: %d",a,b);
    
}
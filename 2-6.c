#include <stdio.h>
#include <string.h>
void main()
{
    char * name;
    int prev,rec,total,fix,rate,unit;
    printf("Enter the name of the customer::");
    gets(name);
    printf("Enter the fixed rate::");
    scanf("%d",&fix);
    printf("Enter the rate per unit::");
    scanf("%d",&rate);

    printf("Enter the previous meter reading::");
    scanf("%d",&prev);
    printf("Enter the recent meter reading::");
    scanf("%d",&rec);

    //calculation part
    unit = rec - prev;
    total = fix + rate*unit;
    //Display the details
    printf("\n\nName:: %s", name);
    printf("\nTotal Units:: %d", unit);
    printf("\nTotal Amount to pay %d",total);
    

}
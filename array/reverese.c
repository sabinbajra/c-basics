#include<stdio.h>

void getArray(int a[],int size)
{
    for(int i=0;i<size;i++){
        printf("Enter a[%d] array element::",i);
        scanf("%d",&a[i]);        
    }
}

void display_array(int * array, int count){
    for(int i=0;i<count;i++){
            printf("a[%d] ",array[i]);
        }
}

int main(){

    int hi=0,lo=0,temp;
    int a[10],size; 

    printf("Enter the size of an array::");
    scanf("%d",&size);

    getArray(a,size);
    display_array(a,size);
    hi = size-1;
        while(lo<hi)
        {
            temp = a[lo];
            a[lo] = a[hi];
            a[hi] = temp;
            lo++;
            hi--;
        }
    printf("\n\nSweapping the array.....\n\nSWAPPED ARRAY::\n");
    display_array(a,size);
    return 0;
}
     
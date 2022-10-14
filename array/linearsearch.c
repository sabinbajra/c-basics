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

int linearsearch(int a[],int count, int key)
{
    int index = -1;
    for(int i=0;i<count;i++){
            if(a[i] == key)
            return i;
        }
    return index;
}


int main(){
    int a[10],size,key,index; 

    printf("Enter the size of an array::");
    scanf("%d",&size);

    getArray(a,size);
    display_array(a,size);

    printf("\nEnter the value to search in an array::");
    scanf("%d",&key);
    index = linearsearch(a,size,key);

    if(index<0)
        printf("\nThe search number is not found in an arrya::");
    else
        printf("\nThe search number is found in %d position of an array::",index);
    return 0;
}
#include <stdio.h>
#include <string.h>

char * reverse(char * str){
int i,l;
char *beginptr, *endptr,temp;
l = strlen(str);
beginptr = str;
endptr = str;
    for(i=0;i<l-1;i++){
    endptr++;
    }


    for(i=0;i<l/2;i++){
        temp = *endptr;
        endptr = beginptr;
        beginptr = &temp;
        endptr--;
        beginptr++;
    }
return endptr;
}

int main(){
char *str = "sabin";
char * rev;
rev = reverse(str);
int len,i;

printf("%s", rev);


}
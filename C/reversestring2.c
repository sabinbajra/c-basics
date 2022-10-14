#include<stdio.h>
char * reverseString(char* str)
{
    int count=0, l, i;
    char *begin_ptr, *end_ptr, ch;
 
     // Get the length of the string
    while(*(str+count)!='\0'){
        count++;
    }
    

    // Set the begin_ptr and end_ptr
    // initially to start of string
    begin_ptr = str;
    end_ptr = str;
 
    // Move the end_ptr to the last character
    for (i = 0; i < count - 1; i++)
        end_ptr++;
 
    // Swap the char from start and end
    // index using begin_ptr and end_ptr
    for (i = 0; i < count / 2; i++) {
        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
  
    // update pointers positions
    begin_ptr++;
    end_ptr--;
  }
return str;
}
 
// Driver code
int main()
{
 
    // Get the string
    char str[100] = "Sabin";
    char * revstr;
    
    // Reverse the string
    revstr = reverseString(str);
    
    // Print the result
    printf("Reverse of the string: %s\n", revstr);
    
    return 0;
}
#include<unistd.h>
int ft_putchar(char c){
    write(1,&c,1);
return 0;
}

void ft_putnbr(int nb)
{
//check if negative value
    if(nb<0)
    {
    ft_putchar('-');
    //negative times negative is posotive
    nb = nb * -1;
    }
    if((nb/10)>0)
    ft_putnbr(nb/10);

    ft_putchar(nb % 10 + 48);

}

void ft_ft(int * nbr)
{
    ft_putnbr(*nbr);
}

void ft_ultimate_ft(int *********nbr){
    ft_putnbr(*********nbr);
    *********nbr = 35;
}

void ft_swap(int *a,int *b){
    ft_putnbr(*a);
    ft_putchar(' ');
    ft_putnbr(*b);
    ft_putchar('\n');
    int temp = *a;
    *a = *b;
    *b = temp;
    
    ft_putchar('\n');
    ft_putnbr(*a);
    ft_putchar(' ');
    ft_putnbr(*b);
}

void ft_div_mod(int a, int b,int *div, int * mod){
    //int result = a/b;
    //int remainder = a%b;
    *div = a/b;
    *mod = a%b; 

}

void ft_putstr(char *str){
    int i=0;
    while(*(str+i)!='\0'){
        ft_putchar(*(str+i));
        i++;
    }

}

int ft_strlen(char *str){
    int count = 0;
    while(*(str+count)!='\0'){
        ft_putchar(*(str+count));
        count++;
    }
    return count;
}

char * ft_strev(char *str){
int count = 0;
char *ptr="";
    while(*(str+count)!='\0'){
        count++;
    }
    
    int i=count;
    int index = 0;
    //char ch;
    while(i>=0)
    {   
        ptr[index] = *(str+i);
        i--;
        index++;
    }
    while(*(ptr+count)!='\0'){
        ft_putchar(*(ptr+count));
        count++;
    }
return ptr;
}

int ft_atoi(char * str){
    int result = 0;
    for(int i=0;*(str+i)!='\0';i++){
        result = result * 10 + *(str+i)-'0';    
    }
return result;
}

void ft_sort_integer_table(int * tab, int n){
    int i=0,j=0,temp=0;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(tab[i]>tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;        
            }
        }
    }
}


int main()
{
//int a = 42;
//ft_ft(&a);
//int *ptr1 = &a;
//int **ptr2 = &ptr1;
//int ***ptr3 = &ptr2;
//int ****ptr4 = &ptr3;
//int *****ptr5 = &ptr4;
//int ******ptr6 = &ptr5;
//int *******ptr7 = &ptr6;
//int ********ptr8 = &ptr7;
//ft_ultimate_ft(&ptr8);
//ft_putnbr(a);
//ft_putchar('\n');
//int b = 100;
//ft_swap(&a,&b);
//ft_div_mod(25,10,&a,&b);
//ft_putchar('\n');
//ft_putchar('\n');
//ft_putnbr(a);
//ft_putchar('\n');
//ft_putnbr(b);
//ft_putstr("Hello how are you!!!");
//ft_strev("Sabin Bajrachary");
//int a = ft_atoi("123");
//ft_putnbr(a);
int a[10] = {5,7,1,3,9,2,4,8,6,0};
ft_sort_integer_table(a,10); 

for(int i=0;i<10;i++)
    ft_putnbr(a[i]);
}
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

void ft_print_alphabet(void)
{
    char alpha = 'a';
    while(alpha <= 'z')
    {
        ft_putchar(alpha);
        alpha++;
    }
}

void ft_print_reverse_alphabet(void)
{
    char a = 'z';
    while(a >= 'a')
    {
        ft_putchar(a);
        a--;
    }
}

void ft_print_numbers(void)
{
char num = '0';
for(;num<='9';num++)
ft_putchar(num);
}

void ft_is_negative(int n)
{
    if(n<0)
        ft_putchar('N');
    else    
        ft_putchar('P');
}

void ft_print_comb(void){
    char a,b,c;
    for(a='0';a<='9';a++)
        for(b=a+1;b<='9';b++)
            for(c=b+1;c<='9';c++){
            if(a!=b && b!=c && a!=c){
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(',');
                ft_putchar(' ');
                }
            }
    
    
}

void ft_print_comb2(void){
int i=0;
int j=0;

    for(i=0;i<=98;i++){
        for(j=i+1;j<=99;j++)
        {
           ft_putchar((i/10)+'0'); 
           ft_putchar((i%10)+'0'); 
           ft_putchar(' ');
           ft_putchar((j/10)+'0'); 
           ft_putchar((j%10)+'0'); 
           if(i<98)
           ft_putchar(','); 
           ft_putchar(' ');
        }
    }
}

void ft_print_combn(int n){
int max=1,i;
    //for(i=1;i<=n;i++)
    //max = max * 10;
    char a,b,c,d,e;
    
    switch (n)
    {
    case 1:
    for(a='0';a<='9';a++){
        ft_putchar(a);
        ft_putchar(',');
        ft_putchar(' ');
    }
                
    break;

    case 2:
    
    for(a='0';a<='9';a++)
        for(b=a+1;b<='9';b++)
            if(a!=b){
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(',');
                ft_putchar(' ');
                }
            
    break;
    
    case 3:
    for(a='0';a<='9';a++)
        for(b=a+1;b<='9';b++)
            for(c=b+1;c<='9';c++){
            if(a!=b && b!=c && a!=c){
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(',');
                ft_putchar(' ');
                }
            }
    break;

    case 4:
    for(a='0';a<='9';a++)
        for(b=a+1;b<='9';b++)
            for(c=b+1;c<='9';c++)
                for(d=c+1;d<='9';d++){
                    if(a!=b && b!=c && a!=c && a!=d && c!=d){
                        ft_putchar(a);
                        ft_putchar(b);
                        ft_putchar(c);
                        ft_putchar(d);
                        ft_putchar(',');
                        ft_putchar(' ');
                        }
                    }
    break;
    default:
        break;
    }

    
}


int main(){
/*ft_print_alphabet();
ft_putchar('\n');
ft_print_reverse_alphabet();
ft_putchar('\n');
ft_print_numbers();
ft_putchar('\n');
ft_is_negative(10);
ft_putchar('\n');
ft_is_negative(-25);
ft_putchar('\n');
ft_print_comb();
ft_putchar('\n');
ft_print_comb2();*/
//ft_putnbr(234);

ft_print_combn(4);
}
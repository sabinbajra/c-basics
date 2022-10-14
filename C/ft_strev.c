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

char * ft_strev(char * str){
    int count = 0;
    int i = 0;
    
    char ch,*revstr,*tempstr;
    revstr = str;
    tempstr = str;

    while(*(str+count)!='\0'){
        count++;
        revstr++;
    }
   
    
    while(i<count/2){
        ch = *revstr;
        *revstr = *tempstr;
        *tempstr = ch;
    
    tempstr++;
    revstr--;
    }

    revstr[count] = '\0';

return revstr;
    
}

int main(){
char * str = "Sabin";
char * revstr;
revstr = ft_strev(str);
while(*revstr != '\0'){
    ft_putchar(*revstr);
    revstr++;
}
}
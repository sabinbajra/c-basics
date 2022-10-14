#include<unistd.h>
#include<stdio.h>
int ft_putchar(char c){
    write(1,&c,1);
return 0;
}

int main(int argc,char * argv[])
{

    printf("Entered Arguments:: %d",argc);
    int j=0,i=0;
    
    for(i=0;i<argc;i++)
    {
        j=0;
        while(argv[i][j] !='\0')
        {
        ft_putchar((argv[i][j]));
        j++;
        }
    ft_putchar('\n');
    }
}


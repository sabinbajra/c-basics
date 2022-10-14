#include<unistd.h>
#include<stdio.h>
void ft_generic1(void){
    char T = 'T';
    char u = 'u';
    char e = ';';
    char t = 't';
    char s = ' ';
    write(1,&T,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&t,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&t,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&t,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&e,1);
    write(1,&s,1);
    write(1,&T,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&t,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&t,1);
    write(1,&u,1);
    write(1,&s,1);
    write(1,&t,1);
    write(1,&u,1);
   
}

void ft_generic(void){
    char * ptr = "Tu tu tu ; Tu tu tu";
    write(1,ptr,19);
}

int ft_iterative_factorial(int nb)
{
    int fact = 1;
    if(nb<0)
        return 0;
    
    for(int i=2;i<=nb;i++)
        fact = fact * i;
    
    return fact;
    
}

int ft_recursive_factorial(int nb){
    if(nb<0)
        return 0;

    if(nb<=1)
        return 1;
    else{
        return nb*ft_recursive_factorial(nb-1);
    }
}

int ft_iterative_power(int nb, int power){
    int result = 1;
    if(power <0){
        return 0;}
    if(power==0){
        return 1;}
    
        while(power>0){
            result = result * nb;
            power--;
        }
    
    return result;
}

int ft_recursive_power(int nb,int power){
    if(power==0)
        return 0;
    if(power==1)
        return nb;
    return nb*ft_recursive_power(nb,power-1);
}

int ft_fibonacci(int index){
    int nth,f1=1,f2=1;
    if(index<0)
        return -1;
    if(index == 1)
        return 0;
    if(index == 2 || index == 3)
        return 1;
    
    while(index>3){
        nth = f1 + f2;
        f1 = f2;
        f2 = nth;
        index--;
    }
    return nth;

}

int ft_sqrt(int nb)
{
    int srt=0;
    int i=1;
        while(1){
            if(i*i == nb)
                return i;
            if(i*i > nb)
                break;
            i++;    
        }
    return srt;
}

int ft_is_prime(int nb){
    int isprime = 1;
    int i=2;
    while(i < nb/2){
        if(nb%i == 0)
            return 0;
    i++;
    }
return isprime;
}

/*int ft_find_next_prime_test(int nb){
    int prime,j;
    for(int i=nb;1==1;i++){
        j = 2;    
        while (j < i/2)
        {
            if(i%j == 0)
                break;
        j++;
        }
    if(j == (i/2)){
        prime = i;
        break;    
        }
    }
    return prime;
}*/

int ft_find_next_prime(int nb){
    int j;
    for(int i=nb;1==1;i++){
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
                break;
        }
    if(i==j)
    return i;
    }
}

int main(){
    //ft_generic();
    //printf("The factorial :: %d", ft_iterative_factorial(7));
    //printf("The factorial :: %d", ft_recursive_factorial(5));
    //printf("The power is :: %d", ft_iterative_power(2,5));
    //printf("The power is :: %d", ft_recursive_power(2,5));
    //printf("The nth elements of the fibonacci is %d", ft_fibonacci(11));
    //printf("SQRT:: %d",ft_sqrt(1));
    //printf("\n\nIsPrime (1:: Prime 0:: Not Prime):: %d",ft_is_prime(89));
    printf("The next prime number is %d",ft_find_next_prime(90));
}

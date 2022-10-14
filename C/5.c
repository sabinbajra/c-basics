#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

void ft_putstr(char * str){
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

char * ft_strcpy(char * dest, char * src)
{
       while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

char * ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i=0;
    while (i<n)
    {
        /* loop to copy n character from src to destination */
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0'; 
    return dest;
}

char *ft_strstr(char *str, char *tofind){
    int i=0,l1=0,l2=0,j=0,count=0,count1=0;
    /*int i=0,j=0,found=0;
    int l1=0,l2 =0;
    
    //counting the length of the main and the substring
    while(*str)
    {
        l1++;
        str++;
    }
    while(*tofind)
    {
        l2++;
        tofind++;
    }
    printf("Main string length:: %d and substring length:: %d",l1,l2);

    //if no string pass or the substring length greater than the main string
    if(l1==0 || l1 > l2 || l2==0)
    {
        return NULL;
    }
    else
    {
        while(i<l2)
        {
            j = 0;
            while(str[i] == tofind[j])
            {
                j++;
                i++;
                if(j==l1)
                {
                    found = 1;
                    break;
                }
            }
            if(found==1)
            {
                printf("Found::");
                break;
            }
        i++;
        }
    }
    */

l2 = strlen(tofind);
l1 = strlen(str);
for (i=0; i<l1;)  
    {  
        j = 0 ;  
        count = 0 ;  
        while((str[i] == tofind[j]))  
        {  
            count++;  
            i++ ;  
            j++ ;  
        }  
        if(count==l2)  
        {  
            count1++;                                     
            count = 0 ;  
        }  
        else  
            i++ ;  
    }      
    printf ( " %s occurs %d times in %s " , tofind , count1 , str );

    /*while (str[i]!='\0')
    {
        for(int j=0;tofind[j]!='\0';j++)
        {
            if(tofind[j]!=str[i])
            {
                break;
            }
            if(tofind[j]!='\0')
        }
    i++;
    }
    */
return str;
}

int ft_strcmp(char *s1,char *s2)
{
    while(*s1!='\0' || *s2!='\0')
    {
        if(*s1!=*s2)
        {
            if(((*s1)-(*s2))>0)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        if(*s1=='\0' && *s2=='\0')
        {
            return 0;
        }
    s1++;
    s2++;
    }
    return 0;
}

int ft_strncmp(char *s1,char *s2, unsigned int n)
{
    unsigned int i=0;
    while((*s1!='\0' || *s2!='\0') )
    {
        if(i<=n)
        {
            if(*s1!=*s2)
            {
                if(((*s1)-(*s2))>0)
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
                
            }
            if(*s1=='\0' && *s2=='\0')
            {
                return 0;
            }
        }
    i++;
    s1++;
    s2++;
    }
return 0;
} 

char *ft_struprcase(char * str)
{
    int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i]-=32;
		++i;
	}
	return (str);
}

char *ft_strlowercase(char * str)
{
     int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i]+=32;
		++i;
	}
	return (str);
}

char *ft_strcapitalize(char * str)
{
    int i=0;
    if(str[i]!='\0' && str[i]>='a' && str[i]<='z')
    {   
        str[i] -=32;
        i++;
    }
    while(str[i]!='\0')
    {
        if((str[i]<'a' || str[i]>'z')&& !(str[i]>='0' && str[i]<='9'))
        {
            if(str[i+1]>='a'&&str[i+1]<='z')
            {
                str[i+1] -= 32;
                i++; 
            }
        }
        i++;
    }
    return str;
}

int ft_str_is_aplha(char *str)
{
    int isalpha = 1;
    int i =0;
    while(str[i]!='\0')
    {
        if(!(str[i]>='a' && str[i] <='z') && !(str[i]>='A' && str[i] <='Z'))
        {
            isalpha = 0;
            break;
        }
    i++;
    }
    return isalpha;
}

int ft_str_is_numeric(char *str)
{
    int isnumeric = 1;
    int i =0;
    while(str[i]!='\0')
    {
        if(!(str[i]>='0' && str[i] <='9'))
        {
            isnumeric = 0;
            break;
        }
    i++;
    }
    return isnumeric;    
}

int ft_str_is_lowercase(char *str)
{
    int islower = 1;
    int i =0;
    while(str[i]!='\0')
    {
        if(!(str[i]>='a' && str[i] <='z'))
        {
            islower = 0;
            break;
        }
    i++;
    }
    return islower;    
}

int ft_str_is_uppercase(char *str)
{
    int isupper = 1;
    int i =0;
    while(str[i]!='\0')
    {
        if(!(str[i]>='A' && str[i] <='Z'))
        {
            isupper = 0;
            break;
        }
    i++;
    }
    return isupper;    
}

int ft_str_is_printable(char *str)
{
    int isprintable = 1;
    int i =0;
    while(str[i]!='\0')
    {
        if(!(str[i]>=31))
        {
            isprintable = 0;
            break;
        }
    i++;
    }
    return isprintable;    
}

char * ft_strcat(char *dest, char *src)
{
    int l1=0,i=0;
    
    while(dest[l1]!='\0')
    {
        l1++;
    }
    while(src[i]!='\0')
    {
        dest[l1] = src[i];
        l1++;
        i++;
    }
    dest[l1]='\0';
    return dest;
}

char * ft_strncat(char *dest, char *src,int nb)
{
    int l2=0,l1=0,i=0;
    
    while(dest[l1]!='\0')
    {
        l1++;
    }
    
    while(src[l2]!='\0')
    {
        l2++;
    }
    
    if(nb>l2)
    {
        while(src[i]!='\0')
        {
            dest[l1] = src[i];
            l1++;
            i++;
        }        
    
    }
    else
    {
        while(i<nb)
        {
            dest[l1] = src[i];
            l1++;
            i++;
        }
    }
    dest[l1]='\0';
    return dest;
}

char *ft_strdup(char *src)
{
char *str;
int i=0;
while(src[i]!='\0')
    {
        i++;
    }
str = (char*)malloc(i);
i=0;
while(src[i]!='\0')
{
    str[i] = src[i];
    i++;
}
str[i] = '\0';

return str;
}

int *ft_range(int min,int max)
{
    int i,*ptr;
    if(min > max)
    {
        return NULL;
    }

    ptr = (int*)malloc(4*(max-min));

    i=0;
    while(min<max)
    {
        ptr[i] = min;
        min++;
        i++;
    }

    return ptr;
}

int ft_ultimate_range(int **range, int min, int max)
{
    int i,*ptr;
    int t_min = min;
    if(min>max)
    {
        return (int)NULL;
    }
    if(*range==NULL)
    {
        return 0;
    }
    ptr = (int*)malloc(4*(max - min));
    i=0;
    while(min<max)
    {
        ptr[i] = min;
        min++;
        i++;
    }

    for(int i=0;i<(max-t_min);i++)
    {
        ft_putnbr(ptr[i]);
        ft_putchar(' ');
    }
    return (i);
}

char *ft_concat_params(int argc, char **argv)
{
    int j,i,totalchar=0;
    char *ptr;
    //looping for n times as per number of arguments passed in commandline
    
    printf("afsfasfas");
    for(i=1;i<=argc;i++)
    {
        j=0;
        while(argv[i][j]!='\0')
        {
            printf("rewtrtwe");
            totalchar++;
            j++;
        }
    }

    ptr = (char*)malloc(totalchar);
    int k=0;
    for(i=1;i<=argc;i++)
    {
        j=0;
        while(argv[i][j]!='\0')
        {
            ptr[k] = argv[i][j];
            j++;
            k++;
            ft_putchar(ptr[k]);
        }
    }
return ptr;
}


int main(int argc, char *argv){
//char source[] = "iiiiii";
//char *destination;
//int min=20, max =50,range;
//range = max - min;
//int *ptrrange = &range;
//int **range1 = &ptrrange;
//char dest[] = {"Hello !!! "};
//char src[] = {"My name is sabin."};
//ft_putstr("Hello My Name Is Sabin...");
//ft_strcpy(dest,"hahahaha haha what can we get for you ??? haha Sabin is my name");
//ft_putstr(dest);
//ft_strncpy(dest,"Hello My Name is :: Sabin",5);
//ft_putstr(dest);
//ft_strstr("Prrrogram Prrogram","rr");
//int cmpvalue;
//cmpvalue = ft_strncmp("sabin ","sabix ",10);
//ft_putnbr(cmpvalue);
//printf("The uppercase is %s",ft_struprcase(dest));
//printf("The lowercase is %s",ft_strlowercase(dest));
//printf("The capitalize is %s",ft_strcapitalize(dest));
//printf("The string is %d",ft_str_is_aplha(dest));
//printf("The string is %d",ft_str_is_numeric(dest));
//printf("The string is %d",ft_str_is_lowercase(dest));
//printf("The string is %d",ft_str_is_uppercase(dest));
//printf("The string is %d",ft_str_is_printable(dest));
//printf("%s",ft_strcat(dest,src));
//printf("%s",ft_strncat(dest,src,7));
//destination = ft_strdup(source);
//ptr = ft_range(30,90);
//for(int i=0;i<(90-30);i++)
//{
  //  ft_putnbr(ptr[i]);
  // ft_putchar(' ');
//}
//**range1 = ft_ultimate_range(range1,min,max);
//printf("range:: %d",**range1);
ft_concat_params(argc,argv);
}
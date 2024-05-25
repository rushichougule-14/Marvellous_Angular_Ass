#include<stdio.h>

void StrToggleX(char *str)
{
    while(*str  != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
        }

        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        
        str++;
    }
}



int main()
{
    char Arr[20];

    printf("Plz Enter string:\n");
    scanf("%[^'\n]s",Arr);

    StrToggleX(Arr);

    printf("String After conversion is :%s\n",Arr);


    return 0;
}
#include<stdio.h>

char CharToggle(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }

    else if ((ch >= 'a')&& (ch <= 'z'))
    {
        return ch -32;
    }

    else
    {
        return ch ;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the Character \n");
    scanf("%c",&cValue);

    cRet = CharToggle(cValue);

    printf("Character in upper case is :%c\n",cRet);

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <string.h>

int hex_binary(char hex[], int binary_number[])   
{
    int i, j=0, length, decimal=0;
    for(length=0; hex[length]!='\0'; ++length);
    for(i=0; hex[i]!='\0'; ++i, --length)
    {
        if(hex[i]>='0' && hex[i]<='9')
            decimal+=(hex[i]-'0')*pow(16,length-1);
        if(hex[i]>='A' && hex[i]<='F')
            decimal+=(hex[i]-55)*pow(16,length-1);
        if(hex[i]>='a' && hex[i]<='f')
            decimal+=(hex[i]-87)*pow(16,length-1);
    }
    while (decimal!=0)
    {
        binary_number[j++] = decimal%2;
        decimal/=2;
    }
    return j;
}


void(long long binary, char[]){

  

}

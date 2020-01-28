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


void(long long binary,char hex[]){

   int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long tempBinary;
    int index, i, digit;
     tempBinary = binary;
    index = 0;
    
    /* Find hexadecimal of binary number */
    while(tempBinary!=0)
    {
        /* Group binary to last four digits */
        digit = tempBinary % 10000;

        /* Find hexadecimal equivalent of last four digit */
        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                    /* 0-9 integer constant */
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    /* A-F character constant */
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

        /* Remove the last 4 digits as it is processed */
        tempBinary /= 10000;
    }
    hex[index] = '\0';

    /* Reverse the hex digits */
    strrev(hex);
}

int main(){
    return 0;
}

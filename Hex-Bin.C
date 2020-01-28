#include <stdio.h>
#include <math.h>
#include <string.h>

void HexToBin(char hexdec[]) 
{ 
  
    long int i = 0; 
  
    while (hexdec[i]) { 
  
        switch (hexdec[i]) { 
        case '0': 
            printf("0000"); 
            break; 
        case '1': 
            printf("0001"); 
            break; 
        case '2': 
            printf("0010"); 
            break; 
        case '3': 
            printf("0011"); 
            break; 
        case '4': 
            printf("0100"); 
            break; 
        case '5': 
            printf("0101"); 
            break; 
        case '6': 
            printf("0110"); 
            break; 
        case '7': 
            printf("0111"); 
            break; 
        case '8': 
            printf("1000"); 
            break; 
        case '9': 
            printf("1001"); 
            break; 
        case 'A': 
        case 'a': 
            printf("1010"); 
            break; 
        case 'B': 
        case 'b': 
            printf("1011"); 
            break; 
        case 'C': 
        case 'c': 
            printf("1100"); 
            break; 
        case 'D': 
        case 'd': 
            printf("1101"); 
            break; 
        case 'E': 
        case 'e': 
            printf("1110"); 
            break; 
        case 'F': 
        case 'f': 
            printf("1111"); 
            break; 
        default: 
            printf("\nInvalid hexadecimal digit %c", 
                   hexdec[i]); 
        } 
        i++; 
    } 
}



void(long long binary,char hex[]){

   int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long tempBinary;
    int index, i, digit;
     tempBinary = binary;
    index = 0;
    
    while(tempBinary!=0)
    {
        
        digit = tempBinary % 10000;

        /* Find hexadecimal equivalent of last four digit */
        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                    
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

        
        tempBinary /= 10000;
    }
    hex[index] = '\0';

  
    strrev(hex);
}

int main(){
    return 0;
}

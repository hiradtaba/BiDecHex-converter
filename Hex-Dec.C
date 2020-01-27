#include <stdio.h>
#include <string.h>

long long HexToDec(char hex[]){
    int len = strlen(hex);
    int base = 1;
    long long val =0;
    
    for (int i = len-1;i>=0;i--){
        if (hex[i]>='0' && hex[i]<='9'){
            val += (hex[i] - 48) * base;
            base *= 16;
        }
        else{
            val += (hex[i] - 55) * base;
            base *= 16;
        }
    }
    
    return val;
}

void DecimalToHex(int n,char hex1[]){
    int val, begin,end,i = 0;
    char hex[20];
    while(n != 0){
       val = n % 16;
       if (val<10){
           val = val + 48;
       }
       else{
           val = val + 55;
       }
        hex[i] = val;
        ++i;
        n /= 16;
       }
       
       end = i-1;
       
       for (begin = 0; begin<i; begin++){
           hex1[begin] = hex[end];
           end--;
       }
       
       hex1[begin] = '\0';
       
}


int main()
{

    return 0;
}

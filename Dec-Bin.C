
#include <stdio.h>
#include <string.h>
#include <math.h>
int BinaryToDecimal(long long num){
    int decimal =0;
    int i = 0; 
    int remain;
    while(num != 0){
        remain = num%10;
        num /= 10;
        decimal = decimal + remain*pow(2,i);
        ++i;
    }
    
    return decimal;
}

long long DecToBinary (long long num){
     long long val = 0;
     long long remain,i = 1;
     
     while(num != 0){
         remain = num%2;
         num /=2;
         val += remain*i;
         i *= 10;
     }
     
     return val;
 }
 
 int main{
   
   return 0;
   
 }

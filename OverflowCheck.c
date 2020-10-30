#include <stdio.h>
int main(void){
    // Your code here!
    unsigned int incnum = 0xFFFFFFFE;
    unsigned int tmp    = ~(incnum);
    unsigned int addrL  = 0x00000050;
    unsigned int addrH  = 0x0;
    
    if(tmp < addrL)
    {
        puts("桁あふれ");
        addrH++;
        addrL = addrL - (tmp + 1);
        printf("0x%x_%x",addrH,addrL);
    }
    else
    {
        puts("桁あふれしない");
        addrL = addrL + incnum;
        printf("0x%x_%x",addrH,addrL);
    }
}

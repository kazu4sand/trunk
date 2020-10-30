#include <stdio.h>
int main(void){
    /* 32bit環境しか使えないけど64bitを使いたい */
    /* さらに足し算時のオーバーフローを考慮したい場合 */
    unsigned int incnum = 0xFFFFFFFE;   /* 加算する数               */
    unsigned int tmp    = ~(incnum);    /* 加算する数を反転させた値 */
    unsigned int numL  = 0x00000050;    /* 加算される数(下位32bit)  */
    unsigned int numH  = 0x0;           /* 加算される数(上位32bit)  */
    
    if(tmp < numL)
    {
        puts("桁あふれ");
        numH++;
        numL = numL - (tmp + 1);
        printf("0x%x_%x",numH,numL);
    }
    else
    {
        puts("桁あふれしない");
        numL = numL + incnum;
        printf("0x%x_%x",numH,numL);
    }
}

#include <stdio.h>

/* 子 */
typedef struct tagChild {
    int a;
    int b;
} Child;

/* 親 */
typedef struct tagBase {
    Child a;
    Child b;
} Base;

/* ポインタ私された構造体の値を実態にコピー */
void testfunc(Base *test)
{
    Child test2;
    test2 = test->a;
    
    test2.a = 2;
    printf("%d,%d\n",test2.a,test2.b);
}

int main(void){
    Base test1;
    test1.a.a = 1;
    test1.a.b = 2;
    testfunc(&test1);
    
    /* testfuncはコピーした構造体を変更しているのでmainの実体には影響しない */
    printf("%d,%d",test1.a.a,test1.a.b);
   
}

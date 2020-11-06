#include <stdio.h>

typedef struct tagChild {
    int a;
    int b;
} Child;

typedef struct tagBase {
    Child a;
    Child b;
} Base;


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
    
    printf("%d,%d",test1.a.a,test1.a.b);
   
}

#include<stdio.h>
void foo();
void bar(int);

int main()
{
    
    void (*p)(int)=&bar;
    printf("Start of Main\n");
    foo();
    p(12);
    p(1);
    foo();
    printf("\nend of Main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}
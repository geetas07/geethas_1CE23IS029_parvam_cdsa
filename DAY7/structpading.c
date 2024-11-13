#include <stdio.h>  
struct s1 {
    short a;
    short b;
};
int main()
{
    printf("%d",sizeof(struct s1));
    return 0;
}
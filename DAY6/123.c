/* UPPER to LOWER case*/
#include<stdio.h>
int main(){
    char arr[100];
    scanf("%[^\n]s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            printf("\nTest1\n");
            arr[i+1]= ( arr[i+1]>='A' &&arr[i+1]<='Z')?arr[i+1]+('A'-'a'):arr[i+1];
        }

    }
    printf("%s",arr);
    return 0;
}
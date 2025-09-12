#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,greater;

    printf("ENTER THREE NUMBER: \n");
    scanf("%d %d %d", &a,&b,&c);

    greater = (a > b && a > c)? a : ((b > c) ? b : c);

    printf("greater number is = %d \n" , greater);

    return 0;
}

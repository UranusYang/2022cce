#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space=5-i , star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(;j<n;j++)
            printf("#");
        printf("\n");
    }
    return 0;
}

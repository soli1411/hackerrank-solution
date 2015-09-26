#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
int i,j,k;
    for (i=0;i<N;i++)
        {for (j=0;j<N-i-1;j++) 
            printf(" ");
        for (k=0;k<i+1;k++) 
            printf("#");
         printf("\n");}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

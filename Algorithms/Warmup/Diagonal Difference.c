#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
int i,j;
int A[N][N];
int res;
    for (i=0;i<N;i++)
        for (j=0;j<N;j++)
        scanf("%d",&A[i][j]);
    for (i=0;i<N;i++)
        for (j=0;j<N;j++)
            if (j==i) res=res+A[i][j];
    for (i=0;i<N;i++)
        for (j=0;j<N;j++)
            if (j==N-i-1) res=res-A[i][j];
    printf("%d",abs(res));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

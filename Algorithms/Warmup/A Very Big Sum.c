#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
long long int A;
int i;
long long int sum=0;
    for (i=0;i<N;i++)
        {scanf("%Ld",&A);
        sum=sum+A;}
    printf("%Ld",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

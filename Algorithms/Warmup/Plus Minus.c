#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
int i;
int A[N];
int p=0,n=0,z=0;
    for (i=0;i<N;i++)
        {scanf("%d",&A[i]);
         if (A[i]>0) p+=1;
         if (A[i]==0) z+=1;
         if (A[i]<0) n+=1;}
    printf("%.3f\n",p/(N*1.0));
    printf("%.3f\n",n/(N*1.0));
    printf("%.3f\n",z/(N*1.0));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

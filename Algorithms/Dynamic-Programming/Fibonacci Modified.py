# Fibonacci Modified hackerrank solution
def fibo(a,b,n): 
    if(n==0): 
        return b; 
    else: 
        return fibo(b,b*b+a,n-1)

a,b,n=raw_input().split()
a=int(a)
b=int(b)
n=int(n)-2
print(fibo(a,b,n))

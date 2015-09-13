#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int lim=(int) 10000;

int gcd(int a, int b)
{
        int temp;
        while(b>0)
        { temp= b;
                b=a%b;
                a=temp;
        }
        return a;
}


int main() 
{//memoizzation
 vector <int> even_sqares;   
 for (int i=2;i<lim;i+=2)
     even_sqares.push_back(i*i);
 int t;cin>>t;
 while (t--)
    {int num,count=0,total=1;cin>>num;
     int square_root=(int)sqrt(num)+1;
     for (int i=2;i<square_root;i++)
        {if (num%i==0)
            {if (binary_search (even_sqares.begin(), even_sqares.end(), i) )
                {count++;}
             if (num/i!=i)
             {if (binary_search (even_sqares.begin(), even_sqares.end(), num/i))
                 {count++;}
              total++;}
             total++;}    
        }
     int tmp=gcd(count,total);
     count= count/tmp;
	 total = total/tmp;
     if (count) cout<<count<<"/"<<total<<endl;
     else cout<<0<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

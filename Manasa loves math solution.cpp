#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string dig(string num)
{string digit="0000000000";
 int len=num.length();
 for (int i=0;i<len;i++)
     digit[num[i]-'0']++;
 return digit;   
}

bool compare(string v,string s)
{for (int i=0;i<10;i++)
    {if (v[i]!=0 && s[i]<v[i])
        return false;
    }
 return true;
}

int main() 
{//memoizzation;
 vector <string> v;
 for (int i=104;i<1001;i+=8)
    v.push_back(dig(to_string(i)));
 int lenv=v.size();   
 int t;cin>>t;
 while (t--)
     {string s;cin>>s;
      int len=s.length();
      bool f=false;
      if(len<3)
			{if(len==1)
				if((s[0]-48)%8==0)
						f=true;
		     if(len==2)
		         if((((s[0]-48)*10)+(s[1]-48))%8==0 || (((s[1]-48)*10)+(s[0]-48))%8==0)
						f=true;
			}
      else {string digs=dig(s);
      for (int i=0;i<lenv;i++)
          if (compare(v[i],digs))
              {f=true;break;}}
      if (f) cout<<"YES"<<endl;
      else   cout<<"NO"<<endl;
     }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

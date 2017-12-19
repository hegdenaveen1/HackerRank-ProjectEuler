#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
bool IsPrime( ull number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  {
  	return (false);
  }
 for( ull k = 1; 36*k*k-12*k < number;++k)
  	{
  	if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   		{
   			return (false);
   		}
	}
  return true;
}

int main() {
ull t,n,x,maxim=0;
    cin >> t;
    
    vector<int> v(t);
    for(ull i=0;i<t;i++)
    {
        cin >> x;
        maxim=max(maxim,x);
        v[i]=x;
    }
    ull su[maxim+1];
    su[0]=0;
    su[1]=0;
    su[2]=2;
    su[3]=5;
    su[4]=5;
    for(ull i=5;i<=maxim;i++)
    {
        if(IsPrime(i))
            su[i]=i+su[i-1];
        else
            su[i]=su[i-1];
    }
    for(ull i=0;i<t;i++)
    {
        cout << su[v[i]] << "\n";
    }
        
}

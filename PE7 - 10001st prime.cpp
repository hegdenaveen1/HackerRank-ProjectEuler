#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



bool isprime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
}

int main() {
    unsigned long long int n,t,l;
    cin >> t;
    vector <unsigned long long int> v;
    v.push_back(2);
    for(unsigned long long int i=3;i<=104743;i=i+2)
    {
        if(isprime(i))
            v.push_back(i);
    }
    
    while(t--)
    {
        cin >> n;
        cout << v[n-1] << "\n";

    }
    return 0;
}

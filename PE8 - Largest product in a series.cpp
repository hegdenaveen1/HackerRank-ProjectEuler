#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    long long int n,k,prod,maxprod;
        while(t--)
        {
            cin >> n >> k;
            string s;
            cin >> s;
            maxprod=0;
            for(int j=0;j<n-k;j++)
            {
                prod=1;
            for(int i=j;i<j+k;i++)
            {
                prod = prod * (int)(s[i]-'0');
            }
                
            maxprod=maxprod>prod?maxprod:prod;
            }
            cout << maxprod << "\n";
        }
    return 0;
}

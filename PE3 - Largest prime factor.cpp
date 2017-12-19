#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long int n,t,x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        
        int lp;
        while(n%2==0)
        {
            lp=2;
            n=n/2;
        }
        for(int i=3;i<=sqrt(n);i=i+2)
        {
            while(n%i==0)
            {
                lp=i;
                n=n/i;
            }
        }
        if(n>2)
            cout << n << "\n";
        else
            cout << lp << "\n";
    }
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int fibo[85];
    fibo[0]=1;
    fibo[1]=1;
    fibo[2]=2;
    fibo[3]=3;
    fibo[4]=5;
    fibo[5]=8;
    for(int i=6;i<85;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int t;
    unsigned long long int n,sum;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sum=0;
        for(int i=1;fibo[i]<=n;i++)
        {
            if(fibo[i]%2==0)
            {
                sum+=fibo[i];
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
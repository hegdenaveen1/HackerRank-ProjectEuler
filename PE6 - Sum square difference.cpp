#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    int t;
    cin >> t;
    long long int sumsquare,squaresum;
    while(t--)
    {
        cin >> n;
        sumsquare = n*n*(n+1)*(n+1)/4;
        squaresum = n*(n+1)*(2*n+1)/6;
        cout << abs(sumsquare-squaresum) << "\n";
    }
    return 0;
}
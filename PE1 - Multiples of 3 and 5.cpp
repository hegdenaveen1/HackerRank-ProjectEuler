#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    long long int n;
    while(t--)
    {
        cin >> n;
        long long int fivecount,threecount,fifteencount,sum;
        fivecount = (n-1)/5;
        threecount = (n-1)/3;
        fifteencount = (n-1)/15;
       sum = (3*(threecount*(threecount+1))/2) + (5*(fivecount*(fivecount+1))/2) - (15*(fifteencount*(fifteencount+1))/2);
        cout << sum << "\n";
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[41],a;
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=6;
    for(int i=4;i<41;i++)
    {
        a = arr[i-1];
        arr[i] = (i*a)/(__gcd(i,a));            
    }
    int t;
    cin >> t;
    int n;
    while(t--)
    {     
        cin >> n;
        cout << arr[n] << "\n";
    }
    return 0;
}

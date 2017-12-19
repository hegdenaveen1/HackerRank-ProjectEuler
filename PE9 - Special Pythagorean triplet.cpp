#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a,b,c,temp;
        int max=-1;
        for(int a=1;a<n/2;a++)
        {
            b=(n*n-2*n*a)/(2*n-2*a);
            c=n-b-a;
            
            if(c*c==b*b+a*a)
            {   
                temp = a*b*c;
                max = max>temp?max:temp;
            }
        }
        cout << max << "\n";
    }
    
    return 0;
}

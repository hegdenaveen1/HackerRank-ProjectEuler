#include <bits/stdc++.h>

using namespace std;

bool ispalin(int n)
{
    int a=n,rem,rev=0;
    while(a)
    {
        rev=rev*10;
        rev=rev+(a%10);
        a=a/10;       
    }
    if(rev==n)
        return true;
    else
        return false;      
}

int main() {
    vector<int> v;
    int n;
    for(int i=100;i<=1000;i++)
    {
        for(int j=10000/i;j<=1000;j++)
        {
            n=i*j;
            
            if(ispalin(n))
            {
                v.push_back(n);
            }
        }
    }
    
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int l=v.size();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int found=1;
        for(int i=l-1;i>=0&&found;i--)
        {
            if(v[i]<n)
            {
                cout << v[i] << "\n";
                found=0;
            }
        }
    }
    return 0;
}
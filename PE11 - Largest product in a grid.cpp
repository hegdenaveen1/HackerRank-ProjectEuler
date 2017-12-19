#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[20][20];
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxprod=0,prod;
    for(int i=0;i+3<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            prod=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            if(prod>maxprod)
            {
                maxprod=prod;
                
            }
        }
    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j+3<20;j++)
        {
            prod=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            if(prod>maxprod)
            {
                maxprod=prod;
                
            }
        }
    }
    for(int i=0;i+3<20;i++)
    {
        for(int j=0;j+3<20;j++)
        {
            prod=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            if(prod>maxprod)
            {
                maxprod=prod;
                
            }
        }
    }
    for(int i=3;i<20;i++)
    {
        for(int j=0;j+3<20;j++)
        {
            prod=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
            if(prod>maxprod)
            {
                maxprod=prod;
                
            }
        }
    }
    cout << maxprod;
    return 0;
}

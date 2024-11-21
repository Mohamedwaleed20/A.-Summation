#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr[n];
    long long sum = 0;
    for(long long i = 0 ; i<n;i++)
    {
        cin >> arr[i];
    }
    for(long long i = 0 ; i<n;i++)
    {
       sum = sum + arr[i];
    }
    cout << abs(sum) << endl ;

    return 0;
}

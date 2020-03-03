#include <bits/stdc++.h>
#include<string>
#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[n-1]<<endl;

    }
    return 0;
}

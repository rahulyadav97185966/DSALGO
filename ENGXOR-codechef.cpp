#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int BitsSetTable256[256];
void initialize()
{
    BitsSetTable256[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        BitsSetTable256[i] = (i & 1) +
        BitsSetTable256[i / 2];
    }
}
int countSetBits(int n)
{
    return (BitsSetTable256[n & 0xff] +
            BitsSetTable256[(n >> 8) & 0xff] +
            BitsSetTable256[(n >> 16) & 0xff] +
            BitsSetTable256[n >> 24]);
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        initialize();
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        ll queries[q];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=0;i<q;i++)
        {
            cin>>queries[i];
        }
        ll temp;
        for(ll i=0;i<q;i++)
        {
            temp=queries[i];
            ll even=0;
            ll odd=0;
            for(ll j=0;j<n;j++)
            {
                ll get_element=temp ^ arr[j];
                int count=countSetBits(get_element);
                if(count%2==0)
                {
                    even++;
                }
                else{
                    odd++;
                }
            }
            cout<<even<<" "<<odd<<"\n";
        }
    }
    return 0;
}

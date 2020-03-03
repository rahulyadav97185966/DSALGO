#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
    int t,n;
    cin>>n>>t;
    vector<char> arr;
    vector<char>::iterator it;
    char input;
    for(int i=0;i<n;i++)
    {
        cin>>input;;
        arr.push_back(input);
    }
    int size_vector = arr.size();
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]=='H')
            {
                arr[j]='T';
            }
            else{
                arr[j]='H';
            }
        }
        int vect_size = arr.size();
        if(arr[vect_size-1] == 'H')
        {
            arr.pop_back();
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j]=='H')
                {
                    arr[j]='T';
                }
                else{
                    arr[j]='H';
                }
            }
        }
        else{
            arr.pop_back();
            continue;
        }

    }
    int count=0;
    for(int k=0;k<arr.size();k++)
    {
        if(arr[k]=='H')
        {
            count++;
        }
    }
    cout<<count<<endl;
    }

    return 0;
}

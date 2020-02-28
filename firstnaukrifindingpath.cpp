#A set of points over a straight line is defined as correlative to some K if the absolute difference between any two points is a multiple of K. Given N (2 <= N <= 100000) points and some integer K (1 <= K <= 1000). Your task is to find the largest set which is correlative to K. You can assume that only one largest set exists. N and K will be in the first line of the input. N lines will follow, each one with a single integer, representing the location of one of the points. Print the size of the largest set of points which is correlative to K, in the first line of the input. Remaining lines will contain the points of the set, one per line, in increasing order.

Case 1:

For the input provided as follows:

5 2
1
2
3
4
5

Output of the program will be:

3
1
3
5

Case 2:

For the input provided as follows:

6 4
10
15
12
16
20
32

Output of the program will be:

4
12
16
20
32


#program   


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    vector<int> v;
    int count=1;
    for(int i=0;i<n;i++){
            vector<int> v1;
            int count1=1;
            v1.push_back(arr[i]);
        for(int j=i;j<n;j++){
            int k=j+1;
            if(arr[k]-arr[j]%k==0 && arr[k]>arr[j]){
                v1.push_back(arr[k]);
                count1++;
                j=k;
            }
        }
        if(count1>count)
        {
            v=v1;
            count=count1;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

#include <bits/stdc++.h>
#define mod 1000000007
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long long
#define INF 1000000000;
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
/*
vector<lli>arr;
for(int i=0;i<n;i++)
{
	lli it;
	cin>>it;
	arr.push_back(it);
}
*/
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int it;
        cin>>it;
        arr.push_back(it);
    }
    vector<int>res(n,0);
    res[0] = arr[0];
    int x = arr[0];
    for(int i=1;i<n;i++)
    {
        res[i] = arr[i]+x;
        x = max(x,res[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
}

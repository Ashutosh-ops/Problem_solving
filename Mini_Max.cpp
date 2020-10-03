#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592653589793
#define MOD 1000000007

#define ll long long int
#define pb push_back
#define iosbase ios_base::sync_with_stdio(false)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define sc scanf
#define pr printf
#define ub upper_bound
#define lb lower_bound

ll a[10];

int main()
{
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	sort(a,a+5);
	ll mini=0;
	ll maxi=0;
	for(ll i=0;i<4;++i)
		mini+=a[i];
	maxi=mini-a[0]+a[4];
	cout<<mini<<" "<<maxi<<endl;
	return 0;
}

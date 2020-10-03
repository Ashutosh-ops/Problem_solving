#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fr(i,j,s) for(i=j;i<s;i++)
#define ifr(i,j,s) for(i=j;i>=s;i--)
#define Max(a,b) ((a)>(b))?(a):(b)
#define Min(a,b) ((a)<(b))?(a):(b)
int main(void)
{
    lli ap,bp,av,bv,temp;
    cin>>ap>>av>>bp>>bv;
    if(Max(ap,bp) == ap)
    {
        temp=ap;
        ap=bp;
        bp=temp;
        temp=av;
        av=bv;
        bv=temp;
    }
    lli rel_speed=av-bv;
    if((rel_speed>0)&&((bp-ap)%rel_speed==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

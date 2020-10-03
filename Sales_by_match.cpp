#include<bits/stdc++.h>
using namespace std;
int ct[101];
int main() {
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++) {cin>>a[i];ct[a[i]]++;}
    int ans=0;
    for(int i=0;i<101;i++)
        ans+=(ct[i]/2);
    
    cout<<ans<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

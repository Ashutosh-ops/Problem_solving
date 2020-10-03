#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j,c=0;
    cin >> n;
    vector<int> squares(n);
    for(int squares_i = 0; squares_i < n; squares_i++){
       cin >> squares[squares_i];
    }
    int d;
    int m;
    cin >> d >> m;
    for(i=0;i<=n-m;i++){
        int s=0;
        for(j=i;j<i+m;j++){
            s += squares[j];
        }
        if(s==d)
            c++;
    }
    cout<<c;
    // your code goes here
    return 0;
}

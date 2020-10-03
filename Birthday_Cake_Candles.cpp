#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int m = 0;
    for(int i = 0; i < n; i++) m = max(a[i],m);
    int ct = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==m) ct++;
    }
    cout << ct << endl;
    return 0;
}

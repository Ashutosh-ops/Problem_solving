#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int arr[6]={0};
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }
    int a1;
    for(int i=1;i<=5;i++){
        if(ans < arr[i]){
           ans = arr[i];
            a1 = i;
        }
    }
    cout << a1 << endl;
    return 0;
}

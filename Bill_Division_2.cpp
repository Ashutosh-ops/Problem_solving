#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    cin >> n >> k;
    
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        
        if(i != k)
            sum += x;
    }
    
    sum /= 2;
    
    int charged;
    cin >> charged;
    
    if(charged == sum)
        cout << "Bon Appetit\n";
    else
        cout << charged - sum << endl;
    return 0;
}

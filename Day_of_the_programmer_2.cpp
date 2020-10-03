//26/Sept/1918
    //I_F_A
    #include "bits/stdc++.h"
    using namespace std;

    bool isLeap(long long n){
        
        if(n < 1918){
            
            if(n%4 == 0){
                
                return 1;
            }
        }
        else{
            
            if((n%4 == 0 && n%100 != 0) || (n%400 == 0)){
                
                return 1;
            }
        }
        return 0;
    }

    int main(){
        
        long long n;
        cin >> n;
        
        if(n == 1918){
            
            cout << "26.09.1918\n";
        }
        else{
            
            if(isLeap(n)){
                
                cout << "12.09." << n << "\n";
            }
            else{
                
                cout << "13.09." << n << '\n';
            }
        }
    }

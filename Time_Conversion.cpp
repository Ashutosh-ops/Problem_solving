#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char h[3],m[3],s[3],temp;
    bool flag=false;
    h[2]='\0';
    m[2]='\0';
    s[2]='\0';
    cin>>h[0]>>h[1]>>temp>>m[0]>>m[1]>>temp>>s[0]>>s[1]>>temp;
    
    if(temp=='A')
       {
      flag=true;

    }  
    if(h[0]=='1' && h[1]=='2')
        {
        h[0]='0';
        h[1]='0';
    }
    if(flag)
        cout<<h<<":"<<m<<":"<<s<<endl;
    else
        cout<<(atoi(h)+12)<<":"<<m<<":"<<s<<endl;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       int n;
       cin>>n;
       int sq=n*n;
       string p=to_string(n);
       string q;
       string r;
       string sqr=to_string(sq);
       int split=sqr.size()-p.size();
      
       
        q=sqr.substr(0,split);
        r=sqr.substr(split);
        
       
       int result=stoi(q)+stoi(r);
       if(result==n)cout<<"Kaprekar Number";
       else{
        cout<<"Not a Kaprekar Number";
       }
       
       
    return 0;
}

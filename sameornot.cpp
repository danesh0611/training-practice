#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    int sum2=0;
    int sum1=0;
    for(int i=0;i<n1;i++){
        int k;
        cin>>k;
        sum1+=k;
    }
    for(int j=0;j<n2;j++){
        int p;
        cin>>p;
        sum2+=p;
    }
    if(n1==n2 && sum1==sum2)cout<<"Same";
    else{
        cout<<"Not Same";
    }
    return 0;
}

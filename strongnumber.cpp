#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0)return 1;
    return n*factorial(n-1);
}

int main() {
int digit=145;
int dig=digit;
int sum=0;
while(dig!=0){
    sum+=factorial(dig%10);
    dig/=10;
}
if(sum==digit)cout<<"yes"<<endl;
return 0;
}
// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=50;
    int sum=0;
    int product=1;
    while(n!=0){
        sum=sum+n%10;
        product=product*n%10;
        
    }
    if(sum+product==n)cout<<"special";
    

    cout << "Try clicking the Run button.";
    return 0;
}

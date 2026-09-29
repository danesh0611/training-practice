// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=19;
    
    
    for(int i=1;i<100;i++){
        int sum=0;
    int product=1;
        int original=i;
    while(original!=0){
        sum=sum+original%10;
        product=product*(original%10);
        original/=10;
        
    }
  
    if(sum+product==i)cout<<"special "<<i<<endl;
    
}
    
    

    cout << "Try clicking the Run button.";
    return 0;
}

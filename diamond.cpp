#include <iostream>
using namespace std;  
int main() {


int  starcnt=1;
for(int i=1;i<=4;i++){
    for(int j=1;j<=4-i;j++){
        cout<<" ";
    }
    for(int k=0;k<starcnt;k++){
        cout<<"*";
    }
    starcnt+=2;
    for(int j=1;j<=4-i;j++){
        cout<<" ";
    }
    cout<<endl;
}
for(int j=3;j>=1;j--){
    for(int k=1;k<=4-j;k++){
        cout<<" ";
    }
    for(int l=0;l<2*j-1;l++){
        cout<<"*";
    }
    for(int k=1;k<=4-j;k++){
        cout<<" ";
    }
    cout<<endl;
}
return 0;}
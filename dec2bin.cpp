#include<iostream>
using namespace std;
int dec2bin(int n){
    int num;
    int ans=0;
    int pow=1;
    while (n>0)
    {
    num=n%2;
    ans+=num*pow;
    n=n/2;
    pow=pow*10;
    }
    
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dec2bin(n);
}
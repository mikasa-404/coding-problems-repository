#include<iostream>
using namespace std;
int bin2dec(int n){
    int num;
    int ans=0;
    int pow=1;
    while (n>0)
    {
    num=n%10;
    ans+=num*pow;
    n=n/10;
    pow=pow*2;
        }
    
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<bin2dec(n);
}
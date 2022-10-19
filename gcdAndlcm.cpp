#include<bits/stdc++.h>
using namespace std;
//1.gcd
int gcd(int a, int b){
    int gcd=0;
for (int i = 1; i <=min(a,b); i++)
{
    if(a%i==0 && b%i==0)
    gcd=i;
}
return gcd;

}
//--------------------------------------------
//2.lcm
int lcm(int a, int b){
 int   lcm=1;
int n=max(a,b);
for (int i = n; i <=a*b; i=i+n)
{
    if(i%(min(a,b))==0){
        lcm=i;
        return lcm;
    }
    
}
return lcm;
}
//---------------
int main(){
    int a,b;
    cin>>a>>b;
    cout<<" "<<lcm(a,b);
    return 0;
}
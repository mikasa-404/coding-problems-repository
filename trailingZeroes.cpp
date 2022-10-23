#include<iostream>
using namespace std;

int trailingZeroes(int n){
    int ans=0;
while(n>0){
if(n%10==0)
    ans++;
else
    return ans;
    
n=n/10;

}
return ans;
}


int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<trailingZeroes(n);
    return 0;
}
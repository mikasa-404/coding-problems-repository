
/*Given an integer n, return the number of trailing zeroes in n!.
n>=0
*/

#include<iostream>
#include<cmath>
using namespace std;
//calculate factorial and then trailing zeroes , integer overflow pronblem
//aprroach2: count no. of 5 as prime factors(10^n = 2^n.5^n)

//approach1:
int trailing2(int n){
int ans=0;
while(n>0){
if(n%10==0)
    ans++;
else
    return ans;
    
n=n/10;

}
return ans;
//   return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);

}

int trailing1(int n){
    int num=1;
    for (int i = n; i >=1; i--)
    {
        num=num*i;
    }
    cout<<num<<endl;
    return trailing2(num);
    
}

//approach 2:
int trailingZeroes(int n){
    int ans=0;
    while(n>=1){
        ans+=floor(n/5);
        n=n/5;
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
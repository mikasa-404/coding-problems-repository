//for negative integers -> find absolute value and then find reverse
#include<bits/stdc++.h>
using namespace std;   

    int reverse(int x) {
        long num=abs(x);
        long ans=0;
        //long pow=1;
        while(num>0){
            int rem=num%10;
            ans= (ans*10)+ rem;
            num=num/10;
        }
        return ans;
    }


int main(){
cout<<reverse(321)    ;
}
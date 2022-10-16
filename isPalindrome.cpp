#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        //hint: reverse integer integer and check if both are equal
        if(x<0)
            return false;
        string num= to_string(x);
        int n=num.size();
        for (int i = 0; i <=n/2 ; i++)
        {
            if(num[i]!=num[n-1-i])
                return false;
        }
        return true;
        

    }
};
    
int main(){
    Solution s;
    int x;
    cin>>x;
    cout<<s.isPalindrome(x);
}
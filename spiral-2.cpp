//Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n,0)) ;
        int cnt=1;
        int srow=0;
        int scol=0;
        int ecol=ans.size()-1;
        int erow= ans[0].size()-1;
        int total=n*n;
        while(cnt<=total){
            for(int col=scol; col<=ecol; col++){
                ans[srow][col]=cnt++;
                }
            for(int row=srow+1; row<=erow; row++){
                ans[row][ecol]=cnt++;
            }
            for(int col=ecol-1; col>=scol; col--){
                ans[erow][col]=cnt++;
            }
            for(int row=erow-1; row>=srow+1; row--){
                ans[row][scol]=cnt++;
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;

    }
};

int main(){
    Solution s;
    int x=3;
    vector<vector<int>> t;
    t=s.generateMatrix(x);
    for(vector<int> x: t){
        for(int a: x){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    
}
/*Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example:
Given [1, 2, 3, 4]
One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]
NOTE : If there are multiple answers possible, return the one thats lexicographically smallest.
So, in example case, you will return [2, 1, 4, 3]*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//O(nlogn) approach
//sort the array and swap in pairs
void solve(vector<int> &x){
    sort(x.begin(), x.end());
    for (int i = 0; i < x.size()-1; i=i+2)
    {
        swap(x[i], x[i+1]);
    }
}
//O(n) approach
void solve2(vector<int> &x){
    int n=x.size();
    for (int i = 0; i < x.size()-1; i=i+2)
    {
        if(x[i]<x[i-1] && i<=n-1)
        swap(x[i], x[i-1]);
        if(x[i]<x[i+1] && i<=n-2)
        swap(x[i], x[i+1]);
    }
}
int main(){
    vector<int> x={1,2,3, 4, 5};
    solve2(x);
    for(int a: x){
        cout<<a<<" ";
    }
}
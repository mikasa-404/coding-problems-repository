// Longest Substring Without Repeating Characters
//Given a string s, find the length of the longest substring without repeating characters.
//sliding window approach
// we consider two pointers i and j start at 0
//
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int maxlen=0;
    if(s.length()==0) return 0;
    set<char> help;
    int i=0; int j=0;
    while (j<s.length())
    {
        if(help.find(s[j])==help.end()){
            help.insert(s[j]);

            if(j-i+1>maxlen)
                 maxlen=j-i+1;
            j++;

        }
        else{
            help.erase(s[i]);
            i++;
        }
    }
    return maxlen;   
    }
};
int main(){
    string st="pwwkew";
    Solution s;
    cout<<s.lengthOfLongestSubstring(st);
}
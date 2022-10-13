//reverse only vowels in the string and return the string
//ex: hello ; 
//ex: leetcode: e,e,o,e : e, o, e, e
//leotcede

#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Solution {
public:

    bool checkVowel(char ch){
        switch (ch)
        {
        case 'a' : return true;
            break;
        case 'e' : return true;
            break;
        case 'i' : return true;
            break;
        case 'o' : return true;
            break;
        case 'u' : return true;
            break;
        case 'A' : return true;
            break;
        case 'E' : return true;
            break;
        case 'I' : return true;
            break;
        case 'O' : return true;
            break;
        case 'U' : return true;
            break;
        
        default: return false;
            break;
        }
    }

    //Approach 1
    string reverseVowels(string s) {
        //traverse through string and push_back all positions which have vwels in it
        vector <int> vowelss;
        for(int i=0; i<s.length(); i++){
           if(checkVowel(s[i])) 
               vowelss.push_back(i);
           
        }
        //swap vowels positions
        //i=0 swappd with n-1
        //1-> n-2 2-> n-3
        //i -> n-i-1
        int n= vowelss.size();
        for(int i=0; i<n/2; i++){
            swap(s[vowelss[i]], s[vowelss[n-i-1]]);
        }

        return s;    


    }

    //Approach 2 using stack
    
    //push all the  vowels in the  in the stack
    //every time you encounter a position containing vowel, insert the vowel from end of vector and then remove it
    //pop_back() to remove element from the end of vector
    //back() to acess elemnet at the end of the vector

    string reverseVowels(string s) {
    vector <int> c;

    for (auto i: s) {
        if (checkVowel(i)) {
            c.push_back(i);
        }
    }

    for (int i=0; i<s.size(); i++) {
        if (checkVowel(s[i])) {
            s[i] = c.back();
            c.pop_back();
        }
    }
    
    
    
    return s;
}
};


int main(){
    string q="leetcode";
    Solution obj1;
    string s= obj1.reverseVowels(q);
    for(int i=0; i<s.length(); i++){
            cout<<s[i]<<" ";
            }
    
    return 0;
}
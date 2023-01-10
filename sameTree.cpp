
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        return true;
        else if(p!=NULL && q!=NULL){
            if(p->val==q->val){
                if(isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
                return true;
                else
                return false;
            }
            else
            return false;
        }
        return false;
    }
};
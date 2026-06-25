/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool check(TreeNode* p , TreeNode* q){
        if(p == nullptr && q == nullptr){return true;}
        else if(p != nullptr && q == nullptr){return false;}
        else if(p == nullptr && q != nullptr){return false;}
        bool val_check = (p->val == q->val);
        bool left_check = check(p->left , q->left);
        bool right_check = check(p->right , q->right);
        return val_check && left_check && right_check;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p , q);
    }
};

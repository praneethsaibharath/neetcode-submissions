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
        if(p == nullptr){return false;}
        return issame(p,q) || check(p->left,q) || check(p->right,q);
    }

    bool issame(TreeNode* p , TreeNode* q){
        if(p == nullptr && q == nullptr){return true;}
        if(p == nullptr || q == nullptr){return false;}
        return (p->val == q->val) && (issame(p->left , q->left)) && (issame(p->right , q->right));
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return check(root , subRoot);
    }
};

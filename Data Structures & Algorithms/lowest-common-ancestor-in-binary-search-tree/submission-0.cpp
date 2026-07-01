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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* current = root;
        int p_val = p->val;
        int q_val = q->val;
        while(current != nullptr){
            int curr_val = current->val;
            if(curr_val > p_val && curr_val > q_val){
                current = current->left;
            }
            else if(curr_val < p_val && curr_val < q_val){
                current = current->right;
            }
            else{return current;}
        }
    return nullptr;
    }
};

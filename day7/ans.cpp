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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            //Traversing the level
            auto level_size = q.size();
            bool x_exists = false;
            bool y_exists = false;
            
            for(int i = 0; i < level_size; i++){
                auto ele = q.front();
                
                if(ele->val == x) {
                    x_exists = true;
                }
                
                if(ele->val == y) {
                    y_exists = true;
                }
                
                //making sure that they are not siblings -> same parent for next level
                if(ele->left && ele->right) {
                    if(ele->left->val == x && ele->right->val == y) {
                        return false;
                    }
                    
                    if(ele->left->val == y && ele->right->val == x) {
                        return false;
                    }
                }
                
                if(ele->left) {
                    q.push(ele->left);
                }
                
                if(ele->right) {
                    q.push(ele->right);
                }
                
                q.pop();
                
            }
            
            //if both exists, they are cousins. Siblings are ruled out in previous level traversal
            //if only one exists, then other one is present in some other level, thus return false
            if(x_exists && y_exists) {
                return true;
            } else if(x_exists || y_exists) {
                return false;
            }
        }
        
        return false;
    }
};

class Solution {
    public:
        TreeNode* insertIntoBST(TreeNode* root, int val) {
            if(root==NULL) return new TreeNode(val);
            else if(root->val>val){ // go left
                if(root->left==NULL){ // attach it here
                    TreeNode* temp = new TreeNode(val);
                    root->left = temp;
                }
                else insertIntoBST(root->left,val);
            }
            else{ // if(root->right>val)
                if(root->right==NULL){ // attach it here
                    TreeNode* temp = new TreeNode(val);
                    root->right = temp;
                }
                else insertIntoBST(root->right,val);
            }
            return root;
        }
        TreeNode* bstFromPreorder(vector<int>& pre) {
            TreeNode* root = new TreeNode(pre[0]);
            int n = pre.size();
            for(int i=1; i<n; i++){
                insertIntoBST(root,pre[i]);
            }
            return root;
        }
    };
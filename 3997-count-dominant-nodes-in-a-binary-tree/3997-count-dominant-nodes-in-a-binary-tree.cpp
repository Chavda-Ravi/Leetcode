class Solution {
public:
    int ans = 0;

    int dfs(TreeNode* node) {
        if (node == nullptr)
            return INT_MIN;

        int leftMax = dfs(node->left);
        int rightMax = dfs(node->right);

        int subtreeMax = max(node->val, max(leftMax, rightMax));

        if (node->val == subtreeMax)
            ans++;

        return subtreeMax;
    }

    int countDominantNodes(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};
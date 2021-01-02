//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3590/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
   TreeNode* getTargetCopyUtil(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original == NULL)
            return NULL;
        if(original->val == target->val)
            return cloned;
        TreeNode* tempNode = getTargetCopyUtil(original->left, cloned->left, target);
        if(tempNode != NULL)
            return tempNode;
        tempNode = getTargetCopyUtil(original->right, cloned->right, target);
        return tempNode;
       
   } 
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return getTargetCopyUtil(original, cloned, target);
    }
};
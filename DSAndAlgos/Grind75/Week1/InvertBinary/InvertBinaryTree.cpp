#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

TreeNode *invertTree(TreeNode *root);

int main() {
  invertTree(2, 1, 3);

  return 0;
}

TreeNode *invertTree(TreeNode *root) {
  if (root == nullptr)
    return nullptr;

  std::swap(root->left, root->right);

  invertTree(root->left);
  invertTree(root->right);

  return root;
}

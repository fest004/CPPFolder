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

  // Swaps the left and right nodechilds of the head we pass in
  std::swap(root->left, root->right);

  // Keep passing in children as a head until they have no more children 
  invertTree(root->left);
  invertTree(root->right);

  return root;
}

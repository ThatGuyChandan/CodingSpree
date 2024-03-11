#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
  int data;
  Node *right;
  Node *left;
  Node(int val)
  {
    data = val;
    right = NULL;
    left = NULL;
  }
};
Node *BstInsert(Node *root, int data)
{
  if (root == NULL)
  {
    root = new Node(data);
  }
  else if (root->data < data)
  {
    root->right = BstInsert(root->right, data);
  }
  else
  {
    root->left = BstInsert(root->left, data);
  }
  return root;
}
int height(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = height(root->left);
  int right = height(root->right);
  return 1 + std::max(left, right);
}
int diameter(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = diameter(root->left);
  int right = diameter(root->right);
  int heightLeft = height(root->left);
  int heightRight = height(root->right);
  int maxPath = 1 + heightRight + heightLeft;
  return std::max(maxPath, std::max(left, right));
}
int main()
{
  int val;
  cin >> val;
  Node *root = NULL;
  while (val != -1)
  {
    cin >> val;
    root = BstInsert(root, val);
  }
  int ans = diameter(root);
  cout << "Diameter of the given binary tree is " << ans;
  return 0;
}
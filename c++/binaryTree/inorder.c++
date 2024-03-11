#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

void inorderPrint(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inorderPrint(root->left);
  cout << root->data << " ";
  inorderPrint(root->right);
}

void preorderPrint(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorderPrint(root->left);
  preorderPrint(root->right);
}

void postorderPrint(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorderPrint(root->left);
  postorderPrint(root->right);
  cout << root->data << " ";
}

void levelorderPrint(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();
    cout << curr->data << " ";
    if (curr->left != NULL)
    {
      q.push(curr->left);
    }
    if (curr->right != NULL)
    {
      q.push(curr->right);
    }
  }
}
void levelOrderInsert(string str)
{
  queue<Node *> q;
  Node *root = new Node(Integer.parseInt(str[0]));
  q.push(root);
  int i = 1;
  int n = str.length();
  while (i < n && !q.empty())
  {
    Node *curr = q.front();
    q.pop();
  }
}
int main()
{
  Node *root = new Node(10);
  root->left = new Node(15);
  root->left->left = new Node(16);
  root->left->right = new Node(18);
  root->right = new Node(20);
  root->right->right = new Node(30);

  levelorderPrint(root);
  cout << "\n";
  // postorderPrint(root);
  // cout<<"\n";
  // preorderPrint(root);

  return 0;
}

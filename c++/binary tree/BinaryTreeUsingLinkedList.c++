#include <iostream>
#include <string>
#include <queue>
using namespace std;
 
struct ListNode
{
    int data;
    ListNode* next;
};
 

struct BinaryTreeNode
{
    int data;
    BinaryTreeNode *left, *right;
};
 

void push(struct ListNode** head_ref, int new_data)
{

    struct ListNode* new_node = new ListNode;
    new_node->data = new_data;

    new_node->next = (*head_ref);
 
    
    (*head_ref)    = new_node;
}
 

BinaryTreeNode* newBinaryTreeNode(int data)
{
    BinaryTreeNode *temp = new BinaryTreeNode;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
void convertList2Binary(ListNode *head, BinaryTreeNode* &root)
{

    queue<BinaryTreeNode *> q;
 
    if (head == NULL)
    {
        root = NULL; 
        return;
    }
 

    root = newBinaryTreeNode(head->data);
    q.push(root);

    head = head->next;
 

    while (head)
    {
        
        BinaryTreeNode* parent = q.front();
        q.pop();
 

        BinaryTreeNode *leftChild = NULL, *rightChild = NULL;
        leftChild = newBinaryTreeNode(head->data);
        q.push(leftChild);
        head = head->next;
        if (head)
        {
            rightChild = newBinaryTreeNode(head->data);
            q.push(rightChild);
            head = head->next;
        }
 
        parent->left = leftChild;
        parent->right = rightChild;
       
          
    }
}
 

void inorderTraversal(BinaryTreeNode* root)
{
    if (root)
    {
        inorderTraversal( root->left );
        cout << root->data << " ";
        inorderTraversal( root->right );
    }
}
 

int main()
{
   
    struct ListNode* head = NULL;
    push(&head, 6);  
    push(&head, 7);
    push(&head, 5);
    push(&head, 10);
    push(&head, 2);
    push(&head, 13); 
 
    BinaryTreeNode *root;
    convertList2Binary(head, root);
 
    cout << "Inorder Traversal \n";
    inorderTraversal(root);
    return 0;
}
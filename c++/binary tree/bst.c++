class BinarySearchTree {
  class Node {
    int data;
    Node left, right;
 
    public Node(int item) {
      data = item;
      left = right = null;
    }
  }
 
  Node root;
 
  BinarySearchTree() {
    root = null;
  }
 
  void insert(int data) {
    root = insertKey(root, data);
  }
 
  // Insert key in the tree
  Node insertKey(Node root, int data) {
    // Return a new node if the tree is empty
    if (root == null) {
      root = new Node(data);
      return root;
    }
 
    // Traverse to the right place and insert the node
    if (data < root.data)
      root.left = insertKey(root.left, data);
    else if (data > root.data)
      root.right = insertKey(root.right, data);
 
    return root;
  }
 
  void inorder() {
    inorderRec(root);
  }
 
  // Inorder Traversal
  void inorderRec(Node root) {
    if (root != null) {
      inorderRec(root.left);
      System.out.print(root.data + " -> ");
      inorderRec(root.right);
    }
  }
 
  void deleteKey(int data) {
    root = deleteRec(root, data);
  }
 
  Node deleteRec(Node root, int data) {
    // Return if the tree is empty
    if (root == null)
      return root;
 
    // Find the node to be deleted
    if (data < root.data)
      root.left = deleteRec(root.left, data);
    else if (data > root.data)
      root.right = deleteRec(root.right, data);
    else {
      // If the node is with only one child or no child
      if (root.left == null)
        return root.right;
      else if (root.right == null)
        return root.left;
 
      // If the node has two children
      // Place the inorder successor in position of the node to be deleted
      root.data = minValue(root.right);
 
      // Delete the inorder successor
      root.right = deleteRec(root.right, root.data);
    }
 
    return root;
  }
 
  // Find the inorder successor
  int minValue(Node root) {
    int minv = root.data;
    while (root.left != null) {
      minv = root.left.data;
      root = root.left;
    }
    return minv;
  }
 
  // Driver Program to test above functions
  public static void main(String[] args) {
    BinarySearchTree tree = new BinarySearchTree();
 
    tree.insert(9);
    tree.insert(10);
    tree.insert(11);
    tree.insert(6);
    tree.insert(5);
    tree.insert(19);
    tree.insert(20);
    tree.insert(54);
 
    System.out.print("Inorder traversal: ");
    tree.inorder();
 
    System.out.println("\n\nAfter deleting 10");
    tree.deleteKey(11);
    System.out.print("Inorder traversal: ");
    tree.inorder();
  }
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* 
Task
The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer
root,  pointing to the root of a binary search tree.
Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.

Binary Search Tree is a node-based binary tree data structure which has the following properties:  

The left subtree of a node contains only nodes with keys lesser than the node’s key.
The right subtree of a node contains only nodes with keys greater than the node’s key.
The left and right subtree each must also be a binary search tree. 
There must be no duplicate nodes.

// Heap: when the root has a special relationship with its children 
but children don't necessarily have a relationship(ie min-heap where root is the smallest node)
max heap: where the root is larger than the children.
 */

#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root){
          //Write your code here
            if ( !root ) {
                 return -1; 
                 }
            int right_height = getHeight(root->right);
            int left_height = getHeight(root->left);
            if (right_height > left_height) { return (right_height + 1); }
            return (left_height + 1);
        }

}; //End of Solution
int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}
    
       
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);

/*
A binary tree has corresponding components:
    - The root node is the first node
    - Parent/ Internal nodes have links to its child nodes
    - A node can have 0,1,... child nodes
    - A node can have only one parent node
    - Nodes have no link to other child node are called Leaves/ leaf nodes
    - Edges are the number of level-connections in a tree (or level-1)
    - Tree height is the max number of edges
    - Height of a node is the max number of edges between it and the leaf node
    - Tree side is the number of nodes in the tree
*/
class TreeNode{
    public:
        int data;
        TreeNode *left, *right;

        TreeNode (int key){
            data = key;
            left = nullptr;
            right = nullptr;
        }
};



int main(){
    init

    TreeNode *root = new TreeNode(0);
    TreeNode *first = new TreeNode(1);
    TreeNode *second = new TreeNode(2);
    TreeNode *third = new TreeNode(3);
    //Create new nodes

    root -> left = first;
    root -> right = second;
    first -> left = third;
    //Connect tree nodes

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define l <<'\n';

class Tree{
    public:
        int data;
        Tree *left, *right;

        Tree (int key){
            data = key;
            left = nullptr;
            right = nullptr;
        }
};

void dfs(Tree *root){
    if (root == nullptr) return;

    cout<<"Data: "<<root -> data l;

    dfs(root -> left);
    dfs(root -> right);
}

//Breadth First Search on Binary Tree requires 2 function
//One for sorting by level
void bfs(Tree *root, int level, vector<vector<int>>& Level){
    if (root == nullptr) return;

    if (Level.size() <= level)
        Level.push_back({});
    
    Level[level].push_back(root -> data);

    bfs(root -> left, level + 1, Level);
    bfs(root -> right, level + 1, Level);
}

//One for store node
vector<vector<int>> Level(Tree* root){
    vector<vector<int>> res;

    bfs(root, 0, res);

    return res;
}

int main(){
    init

    Tree *first = new Tree(1);
    Tree *second = new Tree(2);
    Tree *third = new Tree(3);
    Tree *forth = new Tree(4);
    Tree *fifth = new Tree(5);
    Tree *sixth = new Tree(6);
    Tree *seventh = new Tree(7);
    Tree *eighth = new Tree(8);
    Tree *ninth = new Tree(9);
    Tree *tenth = new Tree(10);

    /*
    1 -----------
    |           |
    2 -------   3----
    |       |   |   |
    4 ---   5   6   7
    |   |   |
    8   9  10
    */

    first -> left = second;
    first -> right = third;
    second -> left = forth;
    second -> right = fifth;
    third -> left = sixth;
    third -> right = seventh;
    forth -> left = eighth;
    forth -> right = ninth;
    fifth -> left = tenth;

    dfs(first);
    vector<vector<int>> BFS = Level(first);

    for (auto& node: BFS){
        for (auto& i: node){
            cout<<i<<' ';
        }
        cout l
    }

    return 0;
}
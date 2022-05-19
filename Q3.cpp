#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

class bstnode
{
public:
    bstnode();
    int data;
    // char data;
    bstnode *left;
    bstnode *right;
    bstnode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    bstnode *insert(bstnode *root, int val);
};

bstnode::bstnode()
{
    data = 0;
    left = right = NULL;
}

bstnode *bstnode ::insert(bstnode *root, int val)
{
    bstnode *newnode = new bstnode(val);
    if (root == NULL)
    {
        return newnode;
    }
    else if (val > root->data)
    {

        root->right = insert(root->right, val);
    }
    else
    {

        root->left = insert(root->left, val);
    }
    return root;
}

bool search(bstnode *root, int val)
{
    if (root == NULL)
    {

        return false;
    }
    else if (val == root->data)
    {
        cout << "The tree contains the data you are looking for." << endl;
        return true;
    }
    else if (root->data >= val)
    {

        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}
void levelordertraversal(bstnode *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<bstnode *> q;
    q.push(root);
    while (!q.empty())
    {
        bstnode *current = q.front();
        q.pop();
        cout << current->data << "->";
        if (current->left != NULL)
        {
            q.push(current->left);
        }
        if (current->right != NULL)
        {
            q.push(current->right);
        }
    }
}

int main()
{
    bstnode node, *root = NULL;
    /*
                15
               /  \
              12   16
             /       \
            1         21
             \
              5
            /
           3
          /
         2
    */
    root = node.insert(root, 15);
    node.insert(root, 12);
    node.insert(root, 1);
    node.insert(root, 5);
    node.insert(root, 16);
    node.insert(root, 3);
    node.insert(root, 2);
    node.insert(root, 21);

    
    cout << endl;
    cout << "The root element is " << root->data << endl;

    cout<<"searcing fpr an element"<<endl;
    search(root,5);

    cout << "Level order traversal" << endl;
    levelordertraversal(root);
    cout << endl;
     return 0;
}

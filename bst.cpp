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
    bstnode *deleteNode(bstnode *root, int val);
    // bstnode *zigzagtraversal(bstnode *root);
};

bstnode::bstnode()
{
    data = 0;
    left = right = NULL;
}

bstnode *bstnode ::insert(bstnode *root, int val)
{
    bstnode *newnode = new bstnode(val);

    // the method below is inserting using pointers curr , prev.
    // in order to imply this code you have to modify the whole code .
    // bstnode* curr = root;
    // bstnode* prev = NULL;

    // while(curr!=NULL){
    //     if(curr->data>val){
    //         prev = curr;
    //         curr=curr->left;

    //     }
    //     else if (curr->data<val){
    //         prev = curr;
    //         curr=curr->right;
    //     }
    //     if(prev->data>val){
    //         prev->left=newnode;

    //     }
    //     else{
    //         prev->right=newnode;
    //     }

    //     return root

    // }
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

bstnode *findmin(bstnode *root)
{
    if (root == NULL)
    {
        cout << "The tree is empty!" << endl;
    }
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
    cout << "The mininmun element in the tree is : " << root->data << endl;
}

void FindMin(bstnode *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty !";
    }
    while (root->left)
    {
        root = root->left;
    }
    cout << "minimum element is " << root->data << endl;
}
void findmax(bstnode *root)
{
    if (root == NULL)
    {
        cout << "The tree is empty!" << endl;
    }
    while (root->right != NULL)
    {
        root = root->right;
    }
    cout << "The maximum element in the tree is : " << root->data << endl;
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

int height(bstnode *root)
{
    // Base condition
    if (root == NULL)
        return -1;

    // Compute the height of each subtree
    int lheight = height(root->left);
    int rheight = height(root->right);

    // Return the maximum of two
    return max(1 + lheight, 1 + rheight);
}

int Inpre(bstnode *root)
{
    cout << "Inorder predecessor of root" << endl;
    while (root && root->right != NULL)
    {
        root = root->right;
        return root->data;
        // cout<<root->data;
    }
}
int Insucc(bstnode *root)
{
    cout << "inorder successor of root" << endl;
    while (root && root->left != NULL)
    {
        root = root->left;
        return root->data;
    }
}
// int Insucc(bstnode *root);

bstnode *deleteNode(bstnode *root, int val)
{

    if (root == NULL)
    {
        return root;
    }

    if (val < root->data)
    {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        //    case 1: No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->right == NULL)
        {
            bstnode *temp = root;
            root = root->left;
            delete temp;
        }
        else if (root->left == NULL)
        {
            bstnode *temp = root;
            root = root->right;
            delete temp;
        }
        else
        {
            bstnode *temp = findmin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

vector<int> zigzagtraversal(bstnode *root)
{
    vector<int> ans;
    queue<bstnode *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            bstnode *current = q.front();
            q.pop();
            level.push_back(current->data);

            if (current->left != NULL)
            {
                q.push(current->left);
            }
            if (current->right != NULL)
            {
                q.push(current->right);
            }
        }
        flag = !flag;
        if (flag == false)
        {
            reverse(level.begin(), level.end());
        }
        for (int i = 0; i < level.size(); i++)
        {
            ans.push_back(level[i]);
        }
    }
    return ans;
}

void inorder(bstnode *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "->";
    inorder(root->right);
}

void preorder(bstnode *root)
{
    if (!root)
        return;
    cout << root->data << "->";
    preorder(root->left);
    preorder(root->right);
}

void postorder(bstnode *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "->";
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
    // root = node.insert(root,50);
    // node.insert(root,10);
    // node.insert(root,40);
    // node.insert(root,20);
    // node.insert(root,30);

    /*
                    M
                   / \
                  B   Q
                 / \   \
                A   C   Z
    */
    // root =node.insert(root,'M') ; node.insert(root,'B');
    //         node.insert(root,'Q') ; node.insert(root,'Z');
    //         node.insert(root,'A') ; node.insert(root,'C');

    inorder(root);
    FindMin(root);
    findmax(root);

    cout << endl;
    cout << "The root element is " << root->data << endl;

    cout << "Level order traversal" << endl;
    levelordertraversal(root);
    cout << endl;

    cout << "zig zag " << endl;
    vector<int> v;
    v = zigzagtraversal(root);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "->";
    }
    cout << endl;

    cout << height(root);
    cout << endl;

    cout << "Preorder Traversal: " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: " << endl;
    postorder(root);

    cout << endl;
    cout << "Running delete function !" << endl;
    root = deleteNode(root, 3);

    cout << "after deletion process!" << endl;
    inorder(root);
    cout << endl;

    cout << Inpre(root);
    cout << endl;

    cout << Insucc(root);
    cout << endl;

    int n;
    cout << "enter the number you are looking for : " << endl;
    cin >> n;
    if (search(root, n) == true)
        cout << "found " << n << endl;
    else
    {
        cout << "error , number you are looking for does not exist in the tree!";
    }
    return 0;
}